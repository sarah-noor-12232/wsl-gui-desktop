# wsl-gui-desktop
Simple script I wrote to make a command that launches GUI desktop in wsl

---

## How to setup:
- Download the script file to any Ubuntu directory (you can access your Ubuntu directories by typing ```\\wsl$``` in Windows File Explorer Address Bar)
- Source the script file in your default terminal (normally bash). For example if you have the script in your home folder, add ```source ~/desktop.h``` at end of ```.bashrc``` (this file is a bash config file in your Ubuntu home folder)
- Download the remaining config files in any Windows folder. (They need to be in a Windows directory and not a Ubuntu directory because they are launched using Window's cmd)
- Edit the paths in the script file to point to your downloaded Xlaunch files.

## How to use:
- usual command: ```launch-desktop```
- parameters: ```large window```, ```no titlebar```, ```full screen``` (you can type with or without hyphen
- default parameter (if you only type ```launch-desktop``` without anything else): ```large window``` *(can be changed)*
- requires sudo access
Eg: type ```launch-desktop full-screen``` and enter password to launch a full screen GUI.

---

*Note: this script assumes you have the provided config files in your personal folder(in Windows) with username "Dell"*
*Edit: I have added a comment to help you change this default path if needed*

## Prerequisites:
- [WSL](https://docs.microsoft.com/en-us/windows/wsl/install) is intalled
- [VcXsrv](https://sourceforge.net/projects/vcxsrv/) is installed
- WSL is open as [Ubuntu](https://www.microsoft.com/store/productId/9NBLGGH4MSV6)
- Ubuntu Mate is installed ([Full Setup instructions here](https://medium.com/@japheth.yates/the-complete-wsl2-gui-setup-2582828f4577))
