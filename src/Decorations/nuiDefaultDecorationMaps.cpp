/*
  NUI3 - C++ cross-platform GUI framework for OpenGL based applications
  Copyright (C) 2002-2003 Sebastien Metrot & Vincent Caron

  licence: see nui3/LICENCE.TXT
*/

#include "nui.h"

NGL_API const char* gpDefaultDecorationButtonUp = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x0a\x00\x00\x00\x11\x08\x06\x00\x00\x00\xe4\x23\x3d"
"\xe5\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x00\xf0\x49\x44\x41\x54\x78\xda"
"\x8c\x92\x3b\x0e\x83\x30\x0c\x86\x93\xaa\xe7\x42\xed\xc0\xc2\x40"
"\x8f\xd1\xdb\x74\x29\x43\x39\x46\x59\x19\x40\x5c\xaa\x79\x49\xae"
"\x1f\x24\x24\x88\x4a\x8d\x88\x63\x9c\x4f\xbf\xed\x24\x1a\x00\xd4"
"\x3f\x43\x37\x4d\x13\xfd\xe9\x07\x73\x25\x73\x8e\xd0\x30\xbc\x2f"
"\x47\x54\xdb\xde\x26\x86\x51\x71\x32\xf6\x03\xc6\xc8\xb4\xec\x9b"
"\xe4\x5b\x5c\x89\x61\x45\xef\xbd\xd2\x58\x2a\x28\xad\xb4\xc6\x95"
"\xca\xe6\x00\xfe\x68\x51\x66\xd0\x39\x2f\x05\xaf\xe9\x04\xa4\x0f"
"\x52\x54\x14\xad\xe5\x90\xc4\xc8\xac\x00\xec\x40\x83\x60\xd2\x8b"
"\x29\xf3\x14\x11\xb4\x04\x42\xbe\x11\x55\xa3\x8d\xa0\x31\xd2\x88"
"\xda\xc4\x0a\x6a\x9f\x1a\x54\xd9\x40\x3e\x04\x34\x2e\xeb\xb2\xb8"
"\x38\x8c\x40\x7e\x3c\x76\xb7\xbd\x01\x85\xa2\xf3\x2e\x35\xc3\x49"
"\x21\x07\xa5\x8c\x13\xdd\x63\xf7\xec\xe6\x80\xb7\x13\xf0\xe0\xbd"
"\x0b\xca\x07\x87\x13\xfd\x10\x54\xd7\x3d\x67\x62\x58\xb1\xae\xeb"
"\xc7\xab\xef\x0f\x9f\x0e\xed\x8d\xe3\x88\xc7\xbb\xbe\xc7\x65\x59"
"\x0e\xc9\xaa\xaa\xee\xb4\x7e\x05\x18\x00\x3b\x0f\x8e\x94\xc5\x4a"
"\xf2\xec\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82";


NGL_API const char* gpDefaultDecorationButtonHover = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x0a\x00\x00\x00\x11\x08\x06\x00\x00\x00\xe4\x23\x3d"
"\xe5\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x00\xd9\x49\x44\x41\x54\x78\xda"
"\x8c\x92\x0b\x0a\x83\x30\x0c\x40\xdb\xb1\xd3\x78\x08\x99\x87\x91"
"\x79\x9a\x81\x65\x82\x3b\x8d\xe2\x21\x3c\xcc\x92\x34\x4b\x5a\x3f"
"\x55\x94\x29\xd8\xda\xfa\x78\x49\x9a\x5a\x66\x36\x57\x1e\x5b\x96"
"\xe5\xfc\xdd\x9d\x30\x85\x0e\xf7\x19\x6a\xdb\xf6\x71\x44\x55\x55"
"\xd5\x05\x58\x8c\x1d\xc0\x97\xb7\x2f\x6c\xd6\xca\x04\x23\x79\x32"
"\x56\x52\x65\x63\x8d\xb5\x32\x6b\xda\x61\x43\x16\x36\x9a\x03\x88"
"\x48\x31\xe1\x29\x5c\x04\xd7\xf5\x02\x12\x62\x5a\x9f\xa2\xbb\x79"
"\x31\x62\xea\x33\x5b\x57\x62\x04\xc0\xbf\xe7\x18\x8d\x00\x6b\xb0"
"\x54\xc6\x7b\x23\x42\xc0\x38\x19\x4f\x42\xd3\x54\xe5\xbe\x9d\xba"
"\xc3\x49\xd5\x74\x35\x47\x05\xd3\xb3\xe3\xd5\x34\xa7\x71\xd3\x3e"
"\xba\xda\xf5\x9e\xc8\x78\x39\x78\x42\x2f\x9d\xc2\xd0\x2d\xf2\xde"
"\x38\x57\xf7\xca\x04\x63\x96\x65\xaf\x77\xd3\x1c\x86\xd4\x7f\xe3"
"\x38\x4a\x47\xa7\xfb\x38\x0c\xc3\xe7\x08\xcc\xf3\xfc\xa9\xf3\x4f"
"\x80\x01\x00\x22\x8b\x86\xd3\x3c\x58\x70\x4a\x00\x00\x00\x00\x49"
"\x45\x4e\x44\xae\x42\x60\x82";


NGL_API const char* gpDefaultDecorationButtonDown = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x0a\x00\x00\x00\x11\x08\x06\x00\x00\x00\xe4\x23\x3d"
"\xe5\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x00\xa3\x49\x44\x41\x54\x78\xda"
"\xcc\x92\x31\x0e\x42\x21\x0c\x86\x5b\xe3\xc2\x4b\x60\xe5\x36\x04"
"\x06\x16\x2e\xe2\x6d\xdc\x3d\x0b\x03\x86\xdb\xb0\xc2\x01\x90\x82"
"\x38\xf1\x94\xd1\x86\x94\x92\x7e\xfc\xf9\x49\xc1\x5a\x2b\xec\x04"
"\x3a\xe7\x66\x1d\x4e\x18\x43\xe9\x3a\xa1\x94\x92\x5e\x51\x52\x4a"
"\x12\x30\x04\x86\x5c\x8a\x66\x07\x03\x6c\x2e\x2a\x20\xf4\x45\x75"
"\x4b\xb9\x64\x2d\xb8\x08\x5d\x51\x70\xfe\xd3\xe3\x00\x05\xa7\xeb"
"\x43\x66\x58\x87\xfe\x48\x1c\xa7\x92\xcb\x00\x19\x3b\xbe\xaa\x11"
"\x78\x81\xcd\xf8\x80\xb8\x0b\xd6\x5d\x10\xfe\x1b\x34\x6d\xce\xcf"
"\x33\xe0\xdd\xeb\xb3\x06\x6b\xed\xdd\x7b\xbf\x04\x67\x0f\xe7\x7f"
"\x8c\x31\x3e\x56\xa0\x52\xea\x46\xfb\x4b\x80\x01\x00\x0f\xe7\x38"
"\xa5\xb2\x37\x7a\x86\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60"
"\x82";






NGL_API const char* gpDefaultDecorationCloseButtonUp = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x0c\x00\x00\x00\x0f\x08\x06\x00\x00\x00\xd0\xe1\x2e"
"\x49\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x01\x26\x49\x44\x41\x54\x78\xda"
"\x94\x92\x4d\xaa\x83\x30\x14\x85\x4f\x1e\x01\x67\xad\x20\x82\x4e"
"\xdd\x81\x33\x47\x2e\xc1\x3d\xe8\xc4\x35\xb9\x06\x67\xe2\x0a\xba"
"\x81\x42\x17\xd0\x51\x8b\xa2\x0e\xc4\x89\x8a\x91\xd4\x1b\x7d\xa5"
"\xe5\x49\x79\xbd\x92\x44\xe3\x77\x6e\xee\x4f\x98\x94\x12\xdf\x18"
"\xcb\xf3\x5c\x5e\xaf\x57\x9c\xcf\x67\xb4\x6d\xbb\x0b\xe9\xba\x0e"
"\xd7\x75\xe1\x38\x0e\x38\xc1\x97\xcb\x45\x6d\x04\x41\xb0\x2b\xc8"
"\xb2\x4c\x31\xea\x84\x28\x8a\x64\x1c\xc7\xb0\x2c\xeb\x63\x28\x65"
"\x59\x22\x49\x12\xf0\xaa\xaa\x30\xcf\x33\xee\xf7\xfb\x6b\xa4\xcb"
"\xf8\x9b\x1b\xb1\x9c\x5e\x48\xf0\x5f\x53\x02\x21\xa6\xc5\xdf\xe2"
"\xf5\x59\x31\xb6\x3c\x12\x7b\x5f\x9c\xca\x2a\xc4\xac\x60\xb9\x68"
"\xd8\x3a\xbd\x39\x60\xdb\x4c\xec\x76\x82\x58\x05\xf4\x4b\x85\x2f"
"\x37\xbf\x50\x62\xc8\xa7\x6a\x15\x4c\xd3\xf4\x6d\x0e\xe2\x43\x6b"
"\xdf\x0b\xc6\x0d\xc3\xc0\xed\x76\x83\x6d\xdb\xef\xe0\x4b\x18\x64"
"\x45\x51\x80\xd8\x1f\xcf\xf3\x70\x3a\x9d\x54\x1f\x28\x79\x31\x0b"
"\x35\xa8\xd4\x34\xc4\xd6\x23\x62\x88\x65\x69\x9a\xca\xae\xeb\xd4"
"\x46\x5d\xd7\xf8\xbd\x8c\x8c\xad\x55\xa1\xd5\x34\x4d\xf8\xbe\x8f"
"\xc3\xe1\x00\x3e\x0c\x03\x8e\xc7\x23\xc2\x30\x84\xa6\x69\x0a\x50"
"\x11\x6d\x30\xad\xe3\x38\xa2\x69\x1a\xf4\x7d\x8f\x87\x00\x03\x00"
"\x46\x4c\xa6\x51\xcf\xba\x16\x76\x00\x00\x00\x00\x49\x45\x4e\x44"
"\xae\x42\x60\x82";



NGL_API const char* gpDefaultDecorationCloseButtonHover = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x0c\x00\x00\x00\x0f\x08\x06\x00\x00\x00\xd0\xe1\x2e"
"\x49\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x01\x05\x49\x44\x41\x54\x78\xda"
"\xac\x92\x4d\x8a\x84\x30\x10\x85\x5f\x9a\x80\x3b\x7f\x10\x2f\xe0"
"\x0d\xdc\xb9\xf2\x1a\xae\xf5\x12\x9e\xc1\xa3\x88\x6b\x2f\xe0\xba"
"\x41\xf0\x00\x1e\xc0\x1f\x14\x37\x2a\x4c\xcc\x58\xa1\x1d\xa6\x67"
"\x64\xe8\x86\x49\x28\x93\x94\xdf\x4b\x52\x8f\x30\x29\x25\xde\x69"
"\xbc\x28\x0a\xd9\x34\x0d\xaa\xaa\xc2\x34\x4d\x97\x90\x69\x9a\xf0"
"\x3c\x0f\xae\xeb\x82\x13\x5c\xd7\xb5\x4a\x84\x61\x78\x29\xc8\xb2"
"\x4c\x31\xd4\x58\x1c\xc7\x32\x49\x12\x58\x96\xf5\xe7\x55\xc6\x71"
"\x44\x9a\xa6\xe0\x6d\xdb\x62\xdf\x77\x0c\xc3\xf0\xed\x37\x3b\xe2"
"\x77\x6d\xc4\x72\x9a\x90\xe0\xe5\xa2\xe9\x23\xc4\xc7\xb1\xdf\xb1"
"\xeb\x97\x63\xec\xe8\x12\x57\x2b\x4e\xb6\x0a\xf1\xda\x09\xc4\x3e"
"\x4e\x10\xef\x5e\xe9\x3f\x05\x3f\x0c\xbb\xd9\xb6\x8d\xfb\xfd\xae"
"\x9c\x7a\x0a\xf1\x3c\x12\x43\xec\xcd\xf7\x7d\x94\x65\xa9\x12\x54"
"\xbc\xd8\x85\x8a\x53\x28\x1e\x30\x31\xc4\xb2\x3c\xcf\xe5\x3c\xcf"
"\x2a\xd1\x75\x1d\xce\xc7\xc8\x18\x53\x73\x1a\x1d\xc7\x41\x10\x04"
"\xd0\x75\x1d\x7c\x5d\x57\x18\x86\x81\x28\x8a\xa0\x69\x9a\x02\x4e"
"\x0b\x4f\xd1\xb6\x6d\xe8\xfb\x1e\xcb\xb2\xe0\x53\x80\x01\x00\xc3"
"\xe4\xac\xed\x23\xb1\xed\x13\x00\x00\x00\x00\x49\x45\x4e\x44\xae"
"\x42\x60\x82";




NGL_API const char* gpDefaultDecorationCloseButtonDown = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x0c\x00\x00\x00\x0f\x08\x06\x00\x00\x00\xd0\xe1\x2e"
"\x49\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x01\x5d\x49\x44\x41\x54\x78\xda"
"\x94\x92\x31\xaa\xc2\x40\x10\x86\xff\x8d\x01\x6d\xd4\x24\xa2\x20"
"\x98\xc6\xca\xd6\xce\xca\xbb\x78\x3e\x5b\x4f\xe0\x05\x14\x0f\x60"
"\xa3\x36\x2a\x49\x10\x41\x25\xbb\xee\xdb\x7f\x92\xc8\x93\x27\xc2"
"\x1b\x98\x6c\x32\xfb\xcd\xfc\xb3\x3b\x51\xd6\x5a\xfc\xc7\xd4\x62"
"\xb1\xb0\xdb\xed\x16\xab\xd5\x0a\x59\x96\x7d\x84\x82\x20\xc0\x78"
"\x3c\xc6\x70\x38\x84\x4f\x78\xb3\xd9\xa0\x56\xab\xa1\xd9\x6c\x7e"
"\x4c\xe0\x1e\x19\x9a\xbf\x5e\xaf\x71\xb9\x5c\x10\x45\x11\xfa\xfd"
"\x3e\x1a\x8d\xc6\x1b\x7c\xbf\xdf\x91\xa6\x29\x92\x24\x01\x59\xff"
"\x78\x3c\x22\x8e\x63\xf4\x7a\x3d\x0c\x06\x03\xb4\x5a\x2d\x76\xea"
"\xbc\x38\x1b\x8b\xed\xf7\x7b\x51\xd9\xed\x76\xf0\x19\x1c\x8d\x46"
"\x92\x44\xb8\x5e\xaf\xbf\x29\x74\x3a\x1d\x71\xc2\xaf\x84\x28\x0a"
"\x11\x84\xa1\x2b\x6a\x91\xe7\xb9\x28\x28\xa7\x40\x0d\xcf\xf3\x10"
"\x06\x21\xae\xd7\x6b\x71\x06\x5e\xab\x31\x4f\x18\x07\x5a\xd7\x89"
"\x2a\x1e\x0e\x56\x52\x00\x65\x83\x4f\xc7\x90\x15\x05\xad\xb5\xb8"
"\x40\xd2\xbe\x2d\x55\x20\xc9\x94\xd2\x46\x17\x0a\x55\x42\xae\xf5"
"\xd7\x81\x69\xfd\x2b\xc1\x18\xf3\x0a\xfc\x1d\x6d\x71\x61\x64\x24"
"\x81\x37\xc0\x8f\x2a\xf0\x32\x5b\xc2\xa5\x71\x9f\xac\x37\x99\x4c"
"\xb0\x5c\x2e\x71\x38\x1c\x9c\x8a\x91\x5e\xe9\x55\x11\xed\x9c\x7b"
"\x64\xc8\xaa\xf9\x7c\x6e\x39\x1c\x06\x4e\xa7\x13\xaa\x9f\x51\x29"
"\x25\xef\x5c\xbb\xdd\x2e\xa6\xd3\xa9\xcc\xc9\xe7\xe8\xdb\xed\x36"
"\x66\xb3\x99\x0c\x8d\x80\x74\x54\xc2\x5c\x1f\x8f\x07\xce\xe7\x33"
"\x6e\xb7\x1b\x7e\x04\x18\x00\x48\x7c\xc7\xc9\x7b\xc5\x99\x4e\x00"
"\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82";



NGL_API const char* gpDefaultDecorationScrollbarVerticalBkg = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x0c\x00\x00\x00\x10\x08\x02\x00\x00\x00\xad\x03\x09"
"\x50\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x00\xac\x49\x44\x41\x54\x78\xda"
"\xac\x91\xbb\x0d\x03\x21\x10\x05\xc1\xe6\x08\x29\x80\xfe\x1b\xa0"
"\x3e\x83\xcf\x6f\x77\xce\x2b\xa4\x4b\x1c\xf8\x05\x88\x85\x61\xf8"
"\xe5\x31\x46\x29\xe5\xf1\x4d\xf6\xa4\x94\x4e\xcf\xdb\x53\x22\x4f"
"\x0f\x1c\x90\xa6\xd7\x5a\xbd\x77\x9b\xae\xb5\x1e\xc7\x01\x8a\x4f"
"\x10\x8e\x39\xa7\xfa\x36\x21\xa2\x7a\xf0\x85\x49\x9a\x0b\xd2\x28"
"\x32\x20\x64\x98\x44\xd0\xbf\x20\xc2\xa6\x1a\xd1\x84\x34\x28\x0d"
"\xe2\x10\x81\x8a\x63\x35\xad\x36\x95\xaf\x08\xe7\x46\xa0\xb4\x08"
"\xd4\x91\xcf\x4c\x79\xcb\xfe\x4e\x51\x9a\x35\xfd\x90\x3f\x42\xe7"
"\x16\xbd\xcd\xbd\xb4\x83\x47\xc1\x4f\x71\x73\x1e\x53\xa5\x5a\x83"
"\xf8\x23\x7e\x80\xbb\xc4\x63\x4e\x8f\x41\x2a\x5a\x6b\xac\x7e\x79"
"\xee\x67\xfa\x08\x30\x00\x9a\x81\x93\xe7\x92\x88\x91\x26\x00\x00"
"\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82";



NGL_API const char* gpDefaultDecorationScrollbarVerticalHdl = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x0a\x00\x00\x00\x0c\x08\x06\x00\x00\x00\x5b\x6b\x2c"
"\xa0\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x01\x0a\x49\x44\x41\x54\x78\xda"
"\x74\x91\x4b\x6e\xc2\x30\x10\x86\xc7\x2f\xf6\xd9\x22\x36\xbd\x4f"
"\x6e\xc2\x79\xb8\x41\x7b\x80\x4a\xac\xbb\xa3\x48\xa1\xbb\x74\x15"
"\xa9\xea\xce\x01\x44\x49\x02\x79\xd9\x89\x9d\xce\x50\xa4\x82\x44"
"\x46\xfa\xfd\xd2\xe7\x7f\x3c\x63\x56\x96\x25\x60\x70\xd4\x02\x15"
"\xa2\xa6\x74\xd0\xb6\xad\x36\xc6\x2e\xbb\xce\xce\x93\x24\xf1\x0c"
"\x41\x6e\x8c\x71\x42\x08\xa8\xeb\x1a\x4e\xa7\x33\x78\xef\x60\xa2"
"\x26\xd0\xbb\x0e\x9a\xa6\xc5\x6b\x4c\x48\x72\x22\x48\x6b\x8d\x80"
"\x47\x0d\x17\x10\x1d\x2f\x7b\xba\xec\x9d\x5b\x50\xca\xb0\x69\x1a"
"\xf8\x8f\xe1\x66\x04\x90\x52\xc2\x6e\xbf\x0f\x09\x9c\xe5\x79\x7e"
"\x03\xb2\xbf\xf1\x4a\x2a\xa9\x20\x8e\xe3\x19\x87\xb1\x60\xf7\xf3"
"\x03\xf0\x3e\xf5\x70\x5d\xf1\xaa\xaa\xbc\xb5\x76\xd4\x90\x8a\xc2"
"\x48\xf9\x36\x4d\x35\x55\x36\x96\xfd\x78\xcc\x68\xb9\xe2\x58\xd1"
"\x12\xc1\xef\x47\x2f\x18\x10\xfd\xd8\x6c\x9e\x71\xf7\x2a\xb3\x2c"
"\x9b\x2b\xa5\xde\x8a\xa2\x78\xa2\x56\x04\x41\x00\x82\x0b\x38\xfc"
"\x1c\x20\x8a\x22\x82\xbe\x50\x2f\xec\x7d\xbd\x86\xcf\x38\xe6\x0e"
"\x9b\xda\xf7\x7d\x88\xbf\x34\xc5\x76\xed\x28\x1d\x39\x11\x44\xfe"
"\xbf\x02\x0c\x00\xb7\x1f\x98\xa8\x33\xa2\xca\x67\x00\x00\x00\x00"
"\x49\x45\x4e\x44\xae\x42\x60\x82";




NGL_API const char* gpDefaultDecorationScrollbarHorizontalBkg = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x10\x00\x00\x00\x0c\x08\x02\x00\x00\x00\xe4\x85\xaa"
"\xd6\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x00\xa4\x49\x44\x41\x54\x78\xda"
"\x94\x90\x51\x0e\x02\x21\x0c\x44\x77\xb5\xf0\xc9\x01\xb8\xff\x05"
"\x38\x9f\xa0\x0e\xbc\xa5\x1a\x76\x63\xe2\x7c\x90\x40\xe7\x31\x6d"
"\xf7\x52\x8a\x99\xdd\xa6\xf6\xa9\x6d\xea\x35\xf5\x1c\x32\xd7\x7d"
"\xc8\x99\x05\x90\xb5\xb5\x96\x73\xee\xd6\x18\x63\x08\x01\xcc\x73"
"\xbe\x01\xfe\xae\xb5\xea\xda\x4d\x72\xc7\x21\x72\x2e\x13\xf4\xfd"
"\x01\xc8\x41\x08\x00\x21\xe7\x04\xb9\xf5\xfe\x01\x10\x8d\x31\x89"
"\x03\x74\xef\x5f\x1c\x4d\x3b\x26\x66\x49\xc0\x40\x94\x72\x4c\x35"
"\x1c\x60\x9c\x4b\x4b\x3a\xf5\xa8\x9c\xce\x6f\x7f\xca\x98\xc9\x37"
"\x4d\xfa\x79\x68\x95\x74\x76\x80\x1d\xb3\x35\x7c\x97\x43\xd7\xa1"
"\x0e\xe8\x92\x52\xa2\xf6\x18\xfa\xdd\xd2\x5b\x80\x01\x00\x55\x2b"
"\x8d\xe9\x5d\x4c\xb2\x3a\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42"
"\x60\x82";



NGL_API const char* gpDefaultDecorationScrollbarHorizontalHdl = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x0c\x00\x00\x00\x0a\x08\x06\x00\x00\x00\x80\x2c\xbf"
"\xfa\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x01\x1c\x49\x44\x41\x54\x78\xda"
"\x7c\x90\xbf\x6a\xc3\x30\x10\xc6\xcf\x46\x0e\x78\xf2\x94\x0e\x25"
"\xf5\xde\x67\xe8\x10\xc8\x1c\xe8\xd8\x87\xc8\xf3\x04\xfa\x00\xed"
"\x5a\x28\x74\x2e\x74\xc8\x13\x78\x33\x74\x2a\x58\x72\x30\xb6\xb1"
"\x65\xcb\x7f\xa5\xde\x99\xb8\x84\xb6\xe4\x83\x1f\x3a\xd0\x77\xa7"
"\xef\x64\x49\x29\x01\x65\x23\x7b\x64\x8b\xac\xe0\xa4\xaa\xaa\xb4"
"\xe0\x3c\x8a\x8f\xc7\xb7\x2c\xcb\x76\x37\xbe\xaf\x2d\x6c\x20\xf3"
"\xfb\x30\x0c\x6b\xa5\x14\xe4\x79\x3e\xfb\xa1\xeb\x3a\xa8\xeb\x1a"
"\xda\xb6\x85\x34\x4d\x3f\x92\x24\xd9\xb0\xb2\x2c\x47\xd7\x75\x21"
"\x8a\x22\xf8\x2d\xc7\x71\xc0\xf3\xbc\xa9\x16\x42\xf8\xe3\x38\xee"
"\x19\x99\x69\x8a\xd6\x1a\x2e\x09\x23\xbd\x60\x8a\x07\x9b\x31\x06"
"\x45\x51\x4c\x0d\xff\x63\x26\x70\x9f\x27\x8c\x76\xcd\xa8\x7b\xbe"
"\xbc\x24\xdc\x2d\xc6\x23\x66\x52\x56\xb0\x70\x16\xd0\x34\xcd\x1f"
"\x93\x41\xac\xb9\x00\xb8\x43\x0e\x36\x2e\xf2\x38\x8c\x3d\x98\xd3"
"\x2b\xe6\x2c\xce\x4f\x6d\xa6\xd7\xef\x91\x57\xd6\xf7\xdd\xae\x69"
"\xda\xdb\xaa\xae\xd7\xb4\x0f\xc3\x9f\xa1\x91\x96\xb1\x40\xb5\x0a"
"\xb2\x34\x03\xc1\x05\x35\x7c\x22\xcf\x2c\x0c\x43\xbd\x5c\x5e\x6d"
"\x34\x7e\xd9\x17\xe7\xdb\x20\x08\x56\x67\xa9\x38\xc5\xa0\xc9\x64"
"\xa6\x49\xdf\x02\x0c\x00\xc6\xba\xc4\x00\x34\x35\xfe\x4a\x00\x00"
"\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82";












NGL_API const char* gpDefaultDecorationArrowClose = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x07\x00\x00\x00\x06\x08\x06\x00\x00\x00\x0f\x0e\x84"
"\x76\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x00\x52\x49\x44\x41\x54\x78\xda"
"\x62\x60\x60\x60\xf8\x0f\xc4\x31\x40\xcc\xc5\x80\x04\xfe\xff\xff"
"\x0f\xa1\x91\x30\x48\x91\x0c\xb2\xa2\x07\x48\x18\x59\x11\x07\x0b"
"\x90\xf8\x86\xa4\xf0\x3a\x10\xff\x04\x62\x2f\x20\x3e\x00\x92\xfc"
"\x0c\x95\xb8\x0b\xc4\xdb\x40\x82\x40\xfb\x9e\x30\x32\x32\x32\xb0"
"\x20\x0b\x02\xf1\x13\x98\x43\x40\x00\x20\xc0\x00\x09\xc6\x1e\x14"
"\xd1\x56\x9d\xf1\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82";



NGL_API const char* gpDefaultDecorationArrowOpen = 
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x06\x00\x00\x00\x07\x08\x06\x00\x00\x00\x2b\x90\x3c"
"\xed\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x00\x58\x49\x44\x41\x54\x78\xda"
"\x62\x64\x60\x60\x58\x06\xc4\xca\x40\xcc\x0b\xc4\x5c\x40\x2c\x0f"
"\xc4\x0c\xcc\x40\xcc\x09\xc4\xe6\x40\xcc\x0e\xc4\xac\x40\x2c\x00"
"\xc4\xb1\x20\x49\x19\xa8\xae\x6b\x40\xfc\x00\x88\xff\x43\x75\x82"
"\x41\x0c\x54\xe2\x3f\x94\x0d\x64\xfd\xff\x0f\xd3\x75\x1e\x2a\x21"
"\x03\x97\x80\x4a\x2e\x83\xab\x46\x03\x20\x95\x1c\x30\xc5\x00\x01"
"\x06\x00\x00\x8c\x16\xeb\x44\x60\x41\x71\x00\x00\x00\x00\x49\x45"
"\x4e\x44\xae\x42\x60\x82";





NGL_API const char* gpDefaultDecorationIconVolume =
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x12\x00\x00\x00\x13\x08\x06\x00\x00\x00\x9d\x92\x5d"
"\xf2\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x02\xd2\x49\x44\x41\x54\x78\xda"
"\xac\x94\xcd\x4b\x14\x71\x18\xc7\xbf\xf3\xb6\xb3\x6f\xee\x68\x8a"
"\x2f\xb9\xb2\x96\x86\x58\x92\xb7\x4e\x81\x57\x41\x4b\x08\x82\x2e"
"\xe9\x3d\x24\x41\x8f\x5e\xba\x04\xfe\x09\x11\x19\x04\x21\x44\xd1"
"\xa5\x2c\x41\xa1\x08\x24\x32\x44\xa8\x44\x13\xbc\x54\x5b\xfb\xe6"
"\xee\xea\x3a\xb3\xf3\xb6\x33\x3d\xf3\x5b\xdd\x8c\xf1\x22\x38\xf0"
"\xcc\x6f\x7e\x6f\x9f\xe7\x7d\x38\xd7\x75\x71\x1a\x0f\x8f\x53\x7a"
"\xc4\xc3\x0f\x8e\xe3\xf0\xf4\xd9\x4b\x57\xe0\x45\x04\x02\x01\x38"
"\x8e\x73\xb0\x53\x1d\x2b\x15\xc0\xb6\x2d\xb6\xee\xba\x15\xf0\x82"
"\x88\xdb\xb7\x6e\x28\xb4\x55\x26\xb1\xb8\x43\xd7\x96\x3f\x7f\x75"
"\x7b\xce\xc5\xb1\xb9\xb9\x85\x48\x24\x72\x00\x67\x6f\x82\xd0\x45"
"\x9e\x43\x28\x14\x46\x53\x53\x2b\x66\x66\xee\x63\x68\xe8\x1a\x02"
"\xd1\x28\xae\x5e\xb9\xdc\x46\x87\x76\x6a\x16\x95\x4a\x7b\x10\x45"
"\x11\x2b\x2b\x9f\x30\x3b\xfb\x00\xb2\x1c\x64\x73\x41\xe0\x51\x2c"
"\xee\x22\x16\xab\xc3\xf8\xf8\x14\xba\xba\xba\x49\x51\x08\xba\xae"
"\x42\x77\x2a\xde\xd5\x56\x12\xad\x06\xda\x2f\x95\xc8\x64\x01\x63"
"\x63\xa3\x98\x9c\xbc\x0b\xcf\x33\xdb\x76\x48\x5c\x82\x71\xd0\xb4"
"\x7d\x6c\x6c\x6c\x10\xb4\x08\x49\x92\xe0\x39\xb2\xbf\xb7\xeb\x5d"
"\x0d\x93\x48\x35\x90\x69\x18\x08\x87\x45\xac\xae\x7e\xa3\x43\x3c"
"\x4c\xd3\x24\x88\x4d\x62\xc0\xb2\x1c\x72\xcf\x62\x6b\xf5\xf5\x0d"
"\x2c\x86\x82\x20\x40\x53\x35\x7f\xd6\x4c\x43\xc7\xf4\xf4\x3d\x04"
"\x83\x41\x8a\x87\x4b\xc2\xb3\x11\x10\x58\xac\x3c\x17\x05\x41\x82"
"\xaa\xaa\x88\x46\x15\x2c\x2e\x2e\x42\x2f\x6b\xfe\xac\x55\xc8\xdf"
"\x91\x91\xeb\xec\x60\xd5\x22\x9d\x69\x15\x45\x87\xcd\x2d\xcb\x25"
"\xeb\x34\x72\x99\x23\x65\x32\xe2\xf1\x38\x74\xe3\x18\x10\x07\xae"
"\xba\x20\xca\x14\x0f\x8d\xa5\x3a\x97\xcb\xd3\x8a\x67\x9d\x80\x74"
"\x3a\xc5\x02\x2e\x8a\x12\xcd\x41\xdf\x0a\xb2\xf9\x1d\x3f\x48\xa2"
"\x0c\xa5\xd3\x69\x34\x36\x36\x51\x3c\x6c\x18\x86\x85\xde\xde\x6e"
"\xca\x5e\x98\xac\xb3\x29\xf5\x41\x64\x32\x19\xa6\xd2\xb2\x2a\x2c"
"\xe8\x96\x65\xf9\x41\xb1\x3a\x05\x5d\xe7\x13\xc8\xe7\x8b\xec\x82"
"\x97\xfa\xad\xad\x6d\x16\x58\x83\xe2\xa7\xaa\x3a\x2b\x5a\x0f\x10"
"\x0a\x45\xd0\xd2\xd2\x82\x5f\xc9\xa4\x1f\xa4\x28\x64\x6a\x36\x4b"
"\xbe\x9f\xa5\xec\xc9\xd8\xde\xfe\x41\x2e\x96\x91\x4a\x65\x58\xf6"
"\x24\x89\x27\x91\xd1\xd9\x99\x20\xb0\x89\x42\xa1\x80\xa3\x6d\x5a"
"\x03\xbd\x99\x7f\x85\x81\x81\x01\xac\xaf\x7f\xa7\xea\x3d\x83\xbe"
"\xbe\x0b\x0c\x54\x6d\x17\x50\x01\x96\x91\x4c\xfe\x21\x49\x11\x24"
"\xc7\x8a\x94\xab\x96\xfe\xff\xa0\xde\x8b\x97\x90\x48\xc4\x99\x76"
"\xaf\x25\x34\x4d\x67\x2d\x61\x9a\x06\xdb\x0f\x04\x24\xb4\xb5\x36"
"\xa3\xa3\xa3\x9d\x00\x32\xc1\x75\xbc\x9e\x7f\xeb\x07\xad\xad\x7d"
"\xc1\xfb\x77\x1f\x08\xa4\x92\xf9\x3d\x68\x6e\x6e\xa0\xb1\x1d\x13"
"\x13\x13\xe8\xef\xef\xc7\xd2\xd2\x12\x06\x07\x07\xb1\xb0\xb0\x80"
"\xb9\xb9\x39\x0c\x0f\xdf\xc4\xec\xe3\x3b\x7e\x10\x35\x03\x54\xad"
"\x84\x6c\xee\x37\x0a\xbb\x25\xb2\x26\x84\xe5\x8f\xe2\xb1\xbf\x8c"
"\x87\x8f\x9e\xe0\xf9\x8b\x51\x28\x0d\xff\xf6\x6b\xdd\x4f\xfe\xc6"
"\x68\xe8\xf0\xe2\x7e\xc2\x5f\x91\xd7\x70\x3f\x8f\x82\x24\x1a\x42"
"\x5e\x49\x9d\x10\xe4\x15\x53\xf9\xaf\x00\x03\x00\x86\xd1\x49\xba"
"\x90\xa9\x9d\x65\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82";




NGL_API const char* gpDefaultDecorationIconFile =
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x10\x00\x00\x00\x14\x08\x06\x00\x00\x00\x84\x62\xbd"
"\x77\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x01\x45\x49\x44\x41\x54\x78\xda"
"\xa4\x94\x3d\x6a\x85\x40\x10\xc7\x47\x5d\xc1\xc2\xc2\x57\x99\xc6"
"\xd2\xc6\xc2\x7b\xd8\xda\x5a\xa6\x91\xd4\x1e\xc0\x32\x75\x22\x81"
"\x34\xa9\x52\x0b\x76\x1e\xc0\x13\x68\xe9\x05\x82\x8d\x10\x02\x09"
"\x7e\x66\x66\xc9\x03\xf5\xf9\xa2\x3c\x07\x86\x1d\xf7\xbf\xfb\xdb"
"\x99\x65\x47\x61\x1c\x47\x38\x62\xc2\x51\x00\x3b\x07\x61\x18\xae"
"\x92\x44\x51\xe4\xa3\xef\xfb\x0f\xba\xae\xbf\x61\xd8\xa2\x0f\x17"
"\x00\xb2\x20\x08\x66\x9b\x29\xbb\x61\x18\x40\x92\x24\x48\x92\xe4"
"\x25\xcf\xf3\xde\xb6\xed\x77\x94\xbe\x49\xbe\x00\x08\x82\x00\x55"
"\x55\xcd\x20\x5d\xd7\x41\xdb\xb6\xe0\x79\x1e\xc4\x71\xfc\x5a\x96"
"\xe5\xc9\x34\xcd\x67\x94\x7e\x28\x13\x71\x09\xa0\xd3\xa6\x2e\xcb"
"\x32\xd4\x75\xcd\x75\xd7\x75\x01\x01\x8f\x45\x51\xdc\xe3\xa7\xc2"
"\x2b\x5c\x02\x18\x63\x33\x27\x00\x95\xd2\xf7\x3d\x5f\xe3\x38\x0e"
"\xa4\x69\xfa\x84\xe1\x09\x5d\x66\x6b\x80\xa9\xd1\x46\x9a\x8b\xa2"
"\x88\xeb\x96\x65\x41\xd3\x34\x24\x69\xe8\x9f\x6c\x79\xe3\x4b\x00"
"\x95\x61\x18\x06\x68\x9a\xc6\x33\xa1\x31\xcb\x32\x92\x64\x92\x37"
"\x33\xe0\x37\x8d\x73\xaa\xaa\xf2\x58\x51\x94\xf5\x77\x30\xbd\xc4"
"\xff\x6c\xa9\x6f\x96\x70\xed\x61\xdd\x9c\x01\xad\xb9\x0a\x58\x3b"
"\x61\x77\x2f\x9c\xe9\xcb\x13\xb6\x4c\x84\x83\x76\x18\x30\x2b\x01"
"\x5b\xfa\xf6\x1f\x0a\xd6\x4e\x2f\xe5\x0e\x5d\xdd\xb9\xf7\x0b\xfd"
"\x63\x0a\x60\x7f\x1d\xc6\x76\x02\x3a\x6a\xe9\x5f\x01\x06\x00\xdb"
"\x58\x5f\x34\x19\xb3\x72\x0e\x00\x00\x00\x00\x49\x45\x4e\x44\xae"
"\x42\x60\x82";



NGL_API const char* gpDefaultDecorationIconFolder =
"\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x12\x00\x00\x00\x10\x08\x06\x00\x00\x00\x1b\x06\x2f"
"\x5c\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x01\xac\x49\x44\x41\x54\x78\xda"
"\xac\x53\xb1\x4a\x83\x31\x10\xbe\x4b\x6b\x15\xad\x2e\x3a\x88\xb8"
"\xb5\x5d\x1c\xec\x24\xb8\x38\xb8\xb8\xba\x38\x38\xe9\x43\xf8\x20"
"\xbe\x84\x6f\xd0\xad\x08\x0e\x2e\x82\x93\x8b\x88\xd6\x41\x14\x2c"
"\x56\xc4\x96\x0a\x7f\x9b\xe4\xe2\x5d\xd2\xfc\x6d\x6d\xa5\x0a\x0d"
"\xff\xf1\x27\xc7\xdd\x97\xef\xbe\xbb\xa0\x73\x0e\xa6\xb1\x14\x4c"
"\x69\x65\xe3\x06\x11\xa1\x7a\x79\xed\x2e\x6e\x1e\x87\x02\x76\xcb"
"\x05\xd8\xdb\xd9\x5a\xe4\x6d\xc2\x66\x26\x02\xc9\x12\x90\xf5\xe2"
"\x86\xdf\x4b\xc1\xe8\x7d\xb7\x72\x5c\x65\xab\xb3\xb5\x7f\x03\xc2"
"\xa8\xd1\xe9\x59\xc5\xdd\x3f\x37\xa0\x54\x2a\x32\xbb\x7e\xc0\x43"
"\xad\x16\x02\x63\x82\x37\x04\xe2\xab\x0a\x6b\x2b\x70\x72\xb4\xef"
"\xd9\xa6\x8c\x9e\x5e\xdf\xe1\xf8\xf0\x80\xa9\x44\xf1\x2d\xa0\xca"
"\xc0\x76\x79\x13\x34\x19\xef\xd7\x04\xd0\x75\x16\xba\x09\x9f\x31"
"\x07\xe7\xd5\x4a\xca\x76\xa8\xb4\x8f\x66\x0b\x9c\x8d\x32\x90\xef"
"\x05\x91\xf3\x40\xc8\xf8\x96\xd0\x03\x75\x3a\x06\x94\x9a\x8d\x3c"
"\xf3\x22\x51\x1f\xc8\x11\x34\xbf\x38\x01\x75\x68\x25\x0a\x09\x0b"
"\x96\x99\x08\x18\x7f\x6c\x96\x7d\x08\x86\x63\xc9\x38\x0e\x71\xa3"
"\x62\x8b\x5b\xf3\xb5\xca\x58\xdf\x41\x09\x91\x2a\x1d\x08\x90\x17"
"\x13\x0c\x89\x8f\xc2\x5f\xfd\xd2\x35\x11\xdd\x68\xfe\x33\x50\x54"
"\xdb\x03\x09\x23\x08\xac\x22\xb0\x15\x7a\xcc\x8e\xc6\x31\x22\xbe"
"\xe9\x93\x45\xcc\x91\xf5\xc1\xa1\xfe\xb0\xf3\x65\x31\x2d\xdf\x2d"
"\xe7\x02\x98\x30\xb2\x34\x0e\x88\x3b\xd2\x49\xb8\x7e\x9d\xce\x11"
"\x0c\x95\xe7\x06\x86\x80\xcf\xaa\x03\x76\x60\x4e\x52\x20\xad\x2d"
"\xbc\x34\x5a\x30\x43\x6d\xa0\x9e\x8c\x18\x7a\x10\xd2\x55\x00\xcf"
"\xc4\xe1\xc8\x2e\x70\x8e\x19\x05\xca\x2a\x07\x6f\x77\x57\x3e\x0b"
"\x27\xbc\xab\x38\x6a\xcb\x4b\xf3\xa3\x93\xcd\x9d\xca\xf7\x86\x2b"
"\xff\xcf\xf7\x2a\xcf\xa6\x3e\x08\x24\xec\xe6\x7e\xbe\xbf\x3f\x2c"
"\xa9\x2f\xf9\x16\x60\x00\x1f\x36\xed\xe4\x94\x39\x4f\x65\x00\x00"
"\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82";

