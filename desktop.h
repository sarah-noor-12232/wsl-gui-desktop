launch-desktop()
{
	# xserver
	# following 3 lines are taken from here: https://medium.com/@japheth.yates/the-complete-wsl2-gui-setup-2582828f4577
	export DISPLAY=$(cat /etc/resolv.conf | grep nameserver | awk '{print $2; exit;}'):0.0
	export LIBGL_ALWAYS_INDIRECT=1
	sudo /etc/init.d/dbus start &> /dev/null
		
	#cmd.exe /C C:/Users/Dell/config1.xlaunch

	if [[ "$@" == *large-window* || "$@" == *large* && "$@" == *window* ]]; then
		cmd.exe /C C:/Users/Dell/large-window.xlaunch
	elif [[ "$@" == *no-titlebar* || "$@" == *no* && "$@" == *titlebar* ]]; then
		cmd.exe /C C:/Users/Dell/no-titlebar.xlaunch
	elif [[ "$@" == *full-screen* || "$@" == *full* && "$@" == *screen* ]]; then
		cmd.exe /C C:/Users/Dell/full-screen.xlaunch
	else
		# this line defines which option to choose by default
		cmd.exe /C C:/Users/Dell/large-window.xlaunch
	fi

	mate-session
}
