> [!IMPORTANT]
> We Are Rewriting The Project.This project has currently stopped updating!
> But we will still accept bug fixes and pull requests 
# MIO-KITCHEN-SOURCE #
![Banner](https://github.com/ColdWindScholar/MIO-KITCHEN-SOURCE/blob/a9bcfdf613ad28e82f7899e3d420d76ecfea174c/splash.png)
#### A Rom Tool Written in Python
##### The Best Free And Open Source Rom Tool For You
> [!CAUTION]
> Unauthorized commercial use prohibited
***
## Used Projects

|                         Name                          | Used for                                      | Link                                                               |       Developer |
|:-----------------------------------------------------:|-----------------------------------------------|--------------------------------------------------------------------|----------------:|
|                       unpac_py                        | unpack sprd pac file                          | [Click](https://github.com/affggh/unpac_py)                        |          Affggh |
|                        fspatch                        | patch file_config before unpack               | [Click](https://github.com/affggh/fspatch)                         |          Affggh |
|                      Logo_dumper                      | Unpack and Repack Xiaomi lOGO.IMG             | [Click](https://github.com/affggh/logo_dumper)                     |          Affggh |
|                 mtk-garbage-porttool                  | Support repack old android folder to img file | [Click](https://github.com/ColdWindScholar/mtk-garbage-porttool)   |          Affggh |
|                    context_pacther                    | Patch file_context before repacking           | [Click](https://github.com/ColdWindScholar/context_patch)          | ColdWindScholar |
|                       lpunpack                        | Unpack and parse Android Super Image          | [Click](https://github.com/unix3dgforce/lpunpack)                  |    unix3dgforce |
|                     android-tools                     | Repack Ext4 Image, Sparse Convertion, lpmake  | [Click](https://github.com/nmeum/android-tools)                    |           nmeum |
|                        cpio_py                        | unpack cpio and repack                        | [Click](https://github.com/ColdWindScholar/cpio_py)                | ColdWindScholar |
|                      erofs-utils                      | Unpack and repack Erofs Images                | [Click](https://github.com/sekaiacg/erofs-utils)                   |        sekaiacg |
|                      make_ext4fs                      | repack ext4 images for old devices            | [Click](https://github.com/anpaza/make_ext4fs)                     |          anpaza |
|                         ext4                          | parse and unpack Ext4 images                  | [Click](https://github.com/cubinator/ext4)                         |       cubinator |
|                      Busybox_w64                      | plugin support                                | [Click](https://frippery.org/busybox/)                             |     Ron Yorston |
|                        Busybox                        | Plugin Support                                | [Click](http://busybox.net/)                                       |   Erik Andersen |
|                        brotli                         | Unpack and repack .br files                   | [Click](https://github.com/google/brotli)                          |          Google |
|                       sdat2img                        | Convert dat to img                            | [Click](https://github.com/xpirt/sdat2img)                         |           xpirt |
|                       img2sdat                        | Convert img to sparse dat                     | [Click](https://github.com/xpirt/img2sdat)                         |           xpirt |
|                       kdztools                        | Unpack kdz and dz files                       | [Click](https://github.com/ehem/kdztools)                          |            ehem |
|                          dtc                          | Decompile and compile device trer files       | [Click](https://android.googlesource.com/platform/external/dtc/)   |    David Gibson |
|                     oppo_decrypt                      | Decrypt ozip and ofp                          | [Click](https://github.com/bkerler/oppo_decrypt)                   |         bkerler |
|                       splituapp                       | Parse and unpack UPDATE.APP file              | [Click](https://github.com/superr/splituapp)                       |          Superr |
|                        libufdt                        | Parse \ Unpack \ Repack Dtbo image            | [click](https://android.googlesource.com/platform/system/libufdt/) |          Google |
|                     ROMFS_PARSER                      | Unpack Romfs files                            | [Click](https://github.com/ddddhm1234/ROMFS_PARSER/tree/main)      |       ddddhm123 |
|                      Nh4RomTools                      | Codes for disable vb                          | [Click](https://github.com/affggh/NH4RomTool)                      |          Affggh |
|                         zstd                          | Unpack and repack zstd files                  | [Click](https://github.com/facebook/zstd)                          |        facebook |
* And other projects! Huge shout out to the developers! 

***
## Localization
### [日本語](https://github.com/ColdWindScholar/MIO-KITCHEN-SOURCE/blob/main/README_ja-JP.md) | [中文](https://github.com/ColdWindScholar/MIO-KITCHEN-SOURCE/blob/main/README_zh-CN.md) | [Português brasileiro](https://github.com/ColdWindScholar/MIO-KITCHEN-SOURCE/blob/main/README_pt-BR.md) | [Deutsch](https://github.com/ColdWindScholar/MIO-KITCHEN-SOURCE/blob/main/README_de-DE.md) | [Русский язык](https://github.com/ColdWindScholar/MIO-KITCHEN-SOURCE/blob/main/README_ru-RU.md) | [Indonesian](https://github.com/ColdWindScholar/MIO-KITCHEN-SOURCE/blob/main/README_id-ID.md) | [Tiếng Việt](https://github.com/ColdWindScholar/MIO-KITCHEN-SOURCE/blob/main/README_vi-VN.md)
***
## Features
* Unpack `boot, dtbo, ext4, erofs, payload, logo` and so on
* Pack `boot, dtbo, ext4, erofs, logo` and so on
***
## Advantages
* Automatic fs_config and fs_context patch
* GUI graphical interface
* A graphical plugin manager, plus an editor for plugin script editing. Support plugin installing and exporting
* Quick updates, secure, stable and fast
* Unique MSH interpreter that supports running MSH scripts
* Provide backward compatibility with Android 8 and lower and create .img for these versions
* Use mkc file choose api on Linux, making it easier to use
***
## Supported Os

|   Os    | Arch                             |
|:-------:|----------------------------------|
|  Linux  | x86_64 arm64                     |
| Windows | x86_64 x86 amd64 arm64(by sewzj) |
|  Macos  | Arm64  X86                       |
## Supported Image Types
| Supported Image Types     |
|---------------------------|
| Android Boot Image        |
| Android Recovery Image    |
| Android Vendor_boot Image |
| Erofs                     |
| Ext4                      |
| F2fs(Linux Version)       |
| Romfs                     |
| Payload                   |
## Supported File Types
| Supported File Types |
|----------------------|
| Zip                  |
| Sprd PAC             |
| ops                  |
| Ozip                 |
| tar.md5              |
| kdz/dz               |
| ofp                  |
| tar.gz               |
## The MIO-KITCHEN Manager
>[!NOTE]
>Its a utils to manage MIO-KITCHEN tool.
<details><summary>Update Prebulit Binary</summary>

```` shell
python3 config upbin
````

</details>

<details><summary>Check If Supported My Machine</summary>

```` shell
python3 config chksupd
````

</details>


## Start To Use
> [!NOTE]
> Currently Only Support Python 3.8 and Newer!
### Prerequisites
<details><summary>macOS</summary>

```` shell
brew install python3-tk python3  tcl-tk
python3 -m pip install -U --force-reinstall pip
pip install -r requirements.txt
````

</details>

<details><summary>Linux</summary>

```` shell
python3 -m pip install -U --force-reinstall pip
pip install -r requirements.txt
sudo apt update -y && sudo apt install python3-tk -y
````

</details>

<details><summary>Windows</summary>

```` shell
python -m pip install -U --force-reinstall pip
pip install -r requirements.txt
````

</details>

### Get started
```` shell
python tool.py
# To create a binary distribution, you could:
python build.py
````
***
# Contact Us
***
### Developer's Email: 3590361911@qq.com
### QQ Group: 683828484
### Developer QQ Group:777617022
***
# Contributors:
***
### [![contributors](https://contrib.rocks/image?repo=ColdWindScholar/MIO-KITCHEN-SOURCE&max=999&column=20)](https://github.com/ColdWindScholar/MIO-KITCHEN-SOURCE/graphs/contributors)
### Thanks to people like you for helping out!
***
# About
***
### MIO-KITCHEN
```
Always free, users first
Quality Tools, presented here!
Brought you by the MIO-KITCHEN-TEAM
```
#### ColdWindScholar (3590361911@qq.com) All Rights Reserved. ####
