/*
 NUI3 - C++ cross-platform GUI framework for OpenGL based applications
 Copyright (C) 2002-2003 Sebastien Metrot & Vincent Caron
 
 licence: see nui3/LICENCE.TXT
 */

#pragma once

#include "nui.h"


class nuiVariant
{
public:
  nuiVariant()
  {
    mIsPointer = false;
    mIsObject = false;
    mIsPOD = false;
    mType = nuiAttributeTypeTrait<void>::mTypeId;
  }
  
  // POD CTOR
  template <typename Type>
  nuiVariant(Type data)
  {
    mIsPointer = is_pointer<Type>::value;
    mIsObject = is_base_of<nuiObject, Type>::value;
    mType = nuiAttributeTypeTrait<Type>::mTypeId;
    mIsPOD = true;
    if (is_same_type<Type, int8>::value || is_same_type<Type, int16>::value || is_same_type<Type, int32>::value || is_same_type<Type, int64>::value)
    {
      mData.mInt = data;
    }
    else if (is_same_type<Type, uint8>::value || is_same_type<Type, uint16>::value || is_same_type<Type, uint32>::value || is_same_type<Type, uint64>::value)
    {
      mData.mUInt = data;
    }
    else if (is_same_type<Type, float>::value || is_same_type<Type, double>::value)
    {
      mData.mFloat = data;
    }
  }
  
  nuiVariant(bool set)
  {
    mIsPointer = false;
    mIsObject = false;
    mType = nuiAttributeTypeTrait<bool>::mTypeId;
    mIsPOD = true;

    mData.mBool = set;
  }
  
  // Pointer CTOR
  template <typename Type>
  nuiVariant(Type* pData)
  {
    mIsPointer = true;
    mIsObject = is_base_of<nuiObject, Type>::value;
    mType = nuiAttributeTypeTrait<Type*>::mTypeId;
    mData.mpPointer = (void*)pData;
    mIsPOD = false;

    if (mIsObject)
      mData.mpObject->Acquire();
  }
  
  // Classes CTORs
  nuiVariant(const nglString& rData)
  {
    mIsPointer = false;
    mIsObject = false;
    mIsPOD = false;
    mType = nuiAttributeTypeTrait<nglString>::mTypeId;
    mString = rData;
  }
  
  nuiVariant(const nglPath& rData)
  {
    mIsPointer = false;
    mIsObject = false;
    mIsPOD = false;
    mType = nuiAttributeTypeTrait<nglPath>::mTypeId;
    mPath = rData;
  }
  
  nuiVariant(const nuiColor& rData)
  {
    mIsPointer = false;
    mIsObject = false;
    mIsPOD = false;
    mType = nuiAttributeTypeTrait<nuiColor>::mTypeId;
    mColor = rData;
  }
  
  nuiVariant(const nuiRect& rData)
  {
    mIsPointer = false;
    mIsObject = false;
    mIsPOD = false;
    mType = nuiAttributeTypeTrait<nuiRect>::mTypeId;
    mRect = rData;
  }
  
  // Copy CTOR
  nuiVariant(const nuiVariant& rObject)
  {
    mData = rObject.mData;
    
    mString = rObject.mString;
    mColor = rObject.mColor;
    mRect = rObject.mRect;
    mPath = rObject.mPath;
    
    mType = rObject.mType;
    
    mIsPointer = rObject.mIsPointer;
    mIsObject = rObject.mIsObject;
    mIsPOD = rObject.mIsPOD;

    if (mIsObject)
      mData.mpObject->Acquire();
  }
  
  // DTOR:
  ~nuiVariant()
  {
    if (mIsObject)
      mData.mpObject->Release();
  }
  
  nuiVariant& operator=(const nuiVariant& rObject)
  {
    if (mIsObject)
      mData.mpObject->Release();
    
    mData = rObject.mData;
    
    mString = rObject.mString;
    mColor = rObject.mColor;
    mRect = rObject.mRect;
    mPath = rObject.mPath;
    
    mType = rObject.mType;
    
    mIsPointer = rObject.mIsPointer;
    mIsObject = rObject.mIsObject;
    mIsPOD = rObject.mIsPOD;
    
    if (mIsObject)
      mData.mpObject->Acquire();
    return *this;
  }
  
  nuiAttributeType GetType() const
  {
    return mType;
  }
  
  void Clear()
  {
    if (mIsObject)
      mData.mpObject->Release();

    mIsPointer = false;
    mIsObject = false;
    mIsPOD = false;
    mType = nuiAttributeTypeTrait<void>::mTypeId;
  }
  
  bool IsVoid() const
  {
    return mType == nuiAttributeTypeTrait<void>::mTypeId;
  }
  
  bool IsPointer() const
  {
    return mIsPointer;
  }
  
  bool IsObject() const
  {
    return mIsObject;
  }
  
  bool IsPOD() const
  {
    return mIsPOD;
  }
  
  // nglString Cast:
  operator nglString() const
  {
    if (mType == nuiAttributeTypeTrait<nglString>::mTypeId)
      return mString;
    
    if (mIsPointer)
      return nglString::Null;
    
    if (mType == nuiAttributeTypeTrait<nuiRect>::mTypeId)
      return mRect.GetValue();
    
    if (mType == nuiAttributeTypeTrait<nuiColor>::mTypeId)
      return mColor.GetValue();
    
    if (mType == nuiAttributeTypeTrait<nglPath>::mTypeId)
      return mPath.GetPathName();
    
    nglString str;
    if (mType == nuiAttributeTypeTrait<float>::mTypeId
        || mType == nuiAttributeTypeTrait<double>::mTypeId)
      str.Add(mData.mFloat);
    else if (mType == nuiAttributeTypeTrait<int8>::mTypeId 
             || mType == nuiAttributeTypeTrait<int16>::mTypeId
             || mType == nuiAttributeTypeTrait<int32>::mTypeId
             || mType == nuiAttributeTypeTrait<int64>::mTypeId)
      str.Add(mData.mInt);
    else if (mType == nuiAttributeTypeTrait<uint8>::mTypeId
             || mType == nuiAttributeTypeTrait<uint16>::mTypeId
             || mType == nuiAttributeTypeTrait<uint32>::mTypeId
             || mType == nuiAttributeTypeTrait<uint64>::mTypeId)
      str.Add(mData.mUInt);
    
    return str;
  }
  
  // POD Cast:
  template<typename Type>
  operator Type() const
  {
    if (nuiAttributeTypeTrait<Type>::mTypeId == nuiAttributeTypeTrait<float>::mTypeId
        || nuiAttributeTypeTrait<Type>::mTypeId == nuiAttributeTypeTrait<double>::mTypeId)
    {
      if (mType == nuiAttributeTypeTrait<float>::mTypeId || mType == nuiAttributeTypeTrait<double>::mTypeId)
        return (Type)mData.mFloat;
      else if (mType == nuiAttributeTypeTrait<nglString>::mTypeId)
        return (Type)mString.GetCDouble();
    }
    else if (nuiAttributeTypeTrait<Type>::mTypeId == nuiAttributeTypeTrait<int8>::mTypeId 
             || nuiAttributeTypeTrait<Type>::mTypeId == nuiAttributeTypeTrait<int16>::mTypeId
             || nuiAttributeTypeTrait<Type>::mTypeId == nuiAttributeTypeTrait<int32>::mTypeId
             || nuiAttributeTypeTrait<Type>::mTypeId == nuiAttributeTypeTrait<int64>::mTypeId)
    {
      if (mType == nuiAttributeTypeTrait<uint8>::mTypeId || mType == nuiAttributeTypeTrait<uint16>::mTypeId ||mType == nuiAttributeTypeTrait<uint32>::mTypeId || mType == nuiAttributeTypeTrait<uint64>::mTypeId
          || mType == nuiAttributeTypeTrait<int8>::mTypeId || mType == nuiAttributeTypeTrait<int16>::mTypeId ||mType == nuiAttributeTypeTrait<int32>::mTypeId || mType == nuiAttributeTypeTrait<int64>::mTypeId)
        return (Type)mData.mInt;
      if (mType == nuiAttributeTypeTrait<float>::mTypeId || mType == nuiAttributeTypeTrait<double>::mTypeId)
        return (Type)ToBelow(mData.mFloat);
      else if (mType == nuiAttributeTypeTrait<nglString>::mTypeId)
        return (Type)mString.GetCInt64();
    }
    else if (nuiAttributeTypeTrait<Type>::mTypeId == nuiAttributeTypeTrait<uint8>::mTypeId
             || nuiAttributeTypeTrait<Type>::mTypeId == nuiAttributeTypeTrait<uint16>::mTypeId
             || nuiAttributeTypeTrait<Type>::mTypeId == nuiAttributeTypeTrait<uint32>::mTypeId
             || nuiAttributeTypeTrait<Type>::mTypeId == nuiAttributeTypeTrait<uint64>::mTypeId)
    {
      if (mType == nuiAttributeTypeTrait<uint8>::mTypeId || mType == nuiAttributeTypeTrait<uint16>::mTypeId ||mType == nuiAttributeTypeTrait<uint32>::mTypeId || mType == nuiAttributeTypeTrait<uint64>::mTypeId
          || mType == nuiAttributeTypeTrait<int8>::mTypeId || mType == nuiAttributeTypeTrait<int16>::mTypeId ||mType == nuiAttributeTypeTrait<int32>::mTypeId || mType == nuiAttributeTypeTrait<int64>::mTypeId)
        return (Type)mData.mUInt;
      if (mType == nuiAttributeTypeTrait<float>::mTypeId || mType == nuiAttributeTypeTrait<double>::mTypeId)
        return (Type)ToBelow(mData.mFloat);
      else if (mType == nuiAttributeTypeTrait<nglString>::mTypeId)
        return (Type)mString.GetCUInt64();
    }
    
    NGL_ASSERT(0);
  }

  operator bool() const
  {
    if (mType == nuiAttributeTypeTrait<bool>::mTypeId)
      return mData.mBool;

    if (mType == nuiAttributeTypeTrait<float>::mTypeId
        || mType == nuiAttributeTypeTrait<double>::mTypeId)
    {
      return (bool)mData.mFloat;
    }
    else if (mType == nuiAttributeTypeTrait<int8>::mTypeId 
             || mType == nuiAttributeTypeTrait<int16>::mTypeId
             || mType == nuiAttributeTypeTrait<int32>::mTypeId
             || mType == nuiAttributeTypeTrait<int64>::mTypeId)
    {
      return (bool)mData.mInt;
    }
    else if (mType == nuiAttributeTypeTrait<uint8>::mTypeId
             || mType == nuiAttributeTypeTrait<uint16>::mTypeId
             || mType == nuiAttributeTypeTrait<uint32>::mTypeId
             || mType == nuiAttributeTypeTrait<uint64>::mTypeId)
    {
      return (bool)mData.mUInt;
    }
    
    return false;
  }

  operator nuiRect() const
  {
    if (mType == nuiAttributeTypeTrait<nuiRect>::mTypeId)
      return mRect;
    if (mType == nuiAttributeTypeTrait<nglString>::mTypeId)
    {
      nuiRect r;
      r.SetValue(mString);
      return r;
    }
    return nuiRect();
  }
  
  operator nuiColor() const
  {
    if (mType == nuiAttributeTypeTrait<nuiColor>::mTypeId)
      return mColor;
    if (mType == nuiAttributeTypeTrait<nglString>::mTypeId)
      return nuiColor(mString);
    return nuiColor();
  }
  
  template<typename Type>
  operator Type*() const
  {
    if (nuiAttributeTypeTrait<Type*>::mTypeId == mType)
      return reinterpret_cast<Type*>(mData.mpPointer);
    
    if (!mIsPointer)
      return NULL;
    
    if (mIsObject && is_base_of<nuiObject, Type>::value)
      return dynamic_cast<Type*>(reinterpret_cast<nuiObject*>(mData.mpPointer));
    
    return NULL;
  }
  
  template<typename Type>
  operator const Type*() const
  {
    if (nuiAttributeTypeTrait<Type*>::mTypeId == mType)
      return reinterpret_cast<const Type*>(mData.mpPointer);
    
    if (!mIsPointer)
      return NULL;
    
    if (mIsObject && is_base_of<nuiObject, Type>::value)
      return dynamic_cast<const Type*>(reinterpret_cast<nuiObject*>(mData.mpPointer));
    
    return NULL;
  }
  
private:
  nuiAttributeType mType;
  union 
  {
    int64 mInt;
    uint64 mUInt;
    double mFloat;
    bool mBool;
    
    void* mpPointer;
    nuiObject* mpObject;    
  } mData;
  
  nglString mString;
  nuiRect mRect;
  nglPath mPath;
  nuiColor mColor;
  
  bool mIsPointer : 1;
  bool mIsObject : 1;
  bool mIsPOD : 1;
};
