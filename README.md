[![emblem](https://img.shields.io/badge/project-passive-lightgrey.svg)](https://git.marktompkins.me/mtompkins/revisiontodateconverter) [![build status](https://git.marktompkins.me/mtompkins/rev-to-date-converter/badges/master/build.svg)](https://git.marktompkins.me/mtompkins/rev-to-date-converter/commits/master) [![Build Status](https://travis-ci.org/mtompkins/rev-to-date-converter.svg?branch=master)](https://travis-ci.org/mtompkins/rev-to-date-converter)
<img align="right" src="https://www.kernel.org/theme/images/logos/tux.png" alt="Linux Logo" title="Tux">

# QT Revision To Date Converter

## Background
Microsoft's Visual Studio has the ability to automatically generate intelligent build and revision numbers. If you put an asterisk in for build and revision visual studio uses the number of days since Jan. 1st 2000 as the build number, and the number of seconds since midnight divided by 2 as the revision.
## Application
This simple QT based application provides a convenient tool for converting between encodings. You can clone and compile this repo with QT5 and the following instructions:
```
git clone https://github.com/mtompkins/rev-to-date-converter.git
cd rev-to-date-converter
qmake RevisionToDateConverter.pro -r -spec linux-g++
make
```
This will produce an executable binary in `build/release`.    
You can also download from the project's [releases](https://github.com/mtompkins/rev-to-date-converter/releases) section.
