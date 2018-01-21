// This file is part of DSpellCheck Plug-in for Notepad++
// Copyright (C)2018 Sergey Semushin <Predelnik@gmail.com>
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#include <Windows.h>
void set_hmodule(HANDLE h_module_arg);

bool APIENTRY DllMain(HANDLE h_module, DWORD reason_for_call,
                      LPVOID /*lpvReserved*/) {
  switch (reason_for_call) {
  case DLL_PROCESS_ATTACH:
    set_hmodule(h_module);
    break;

  case DLL_PROCESS_DETACH:
    //_CrtDumpMemoryLeaks();
    break;

  case DLL_THREAD_ATTACH:
    break;

  case DLL_THREAD_DETACH:
    break;
  }

  return true;
}
