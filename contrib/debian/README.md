
Debian
====================
This directory contains files used to package eloncoind/eloncoin-qt
for Debian-based Linux systems. If you compile eloncoind/eloncoin-qt yourself, there are some useful files here.

## eloncoin: URI support ##


eloncoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install eloncoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your eloncoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/eloncoin128.png` to `/usr/share/pixmaps`

eloncoin-qt.protocol (KDE)

