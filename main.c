/*************************************************************************
** main.c for USBView - a USB device viewer
** Copyright (c) 1999, 2000 by Greg Kroah-Hartman, <greg@kroah.com>
**
**  This program is free software; you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation; version 2 of the License.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
** (See the included file COPYING)
*************************************************************************/


#include <gtk/gtk.h>

int main (int argc, char *argv[])
{
	GtkWidget *window1;

	gtk_init (&argc, &argv);
	window1 = create_windowMain ();
	gtk_widget_show (window1);

	gtk_main ();
	return 0;
}

