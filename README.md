[![emblem](https://img.shields.io/badge/project-passive-lightgrey.svg)](https://git.marktompkins.me/mtompkins/revisiontodateconverter) [![build status](https://git.marktompkins.me/mtompkins/revision-to-date-converter/badges/master/build.svg)](https://git.marktompkins.me/mtompkins/revision-to-date-converter/commits/master)

# QT Revision To Date Converter

## Background
Microsoft's Visual Studio has the ability to automatically generate intelligent build and revision numbers. If you put an asterisk in for build and revision visual studio uses the number of days since Jan. 1st 2000 as the build number, and the number of seconds since midnight divided by 2 as the revision.
## Application
This simple QT based application provides a convenient tool for converting between encodings. You can clone and compile this repo with QT5 and the following instructions:
```
git clone https://github.com/mtompkins/revision-to-date-converter.git
cd revision-to-date-converter
qmake RevisionToDateConverter.pro -r -spec linux-g++
make
```
This will produce an executable binary in ./Build/release
You can also examine a successful build using the above emblems and download a precompiled artifact file.
