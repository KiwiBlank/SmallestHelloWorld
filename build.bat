call "D:\Visual Studio"\VC\Auxiliary\Build\vcvars32.bat"
@echo off

cl /c /W4 /O1 /Os /GS- smallcpp.cpp

Crinkler\crinkler.exe /ENTRY:main ^
         /SUBSYSTEM:CONSOLE ^
 	 /UNALIGNCODE ^
         /TINYHEADER ^
	 /NODEFAULTLIB ^
	 /TINYIMPORT ^
         /OUT:smallcpp.exe ^
         smallcpp.obj kernel32.lib