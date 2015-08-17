/* LLDP CLI commands header file
 *
 * Hewlett-Packard Company Confidential (C) Copyright 2015 Hewlett-Packard Development Company, L.P.
 *
 * GNU Zebra is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * GNU Zebra is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Zebra; see the file COPYING.  If not, write to the Free
 * Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * File: lldp_vty.h
 *
 * Purpose:  To add declarations required for lldp_vty.c
 */

#ifndef _LLDP_VTY_H
#define _LLDP_VTY_H

#define CONFIG_LLDP_STR "Configure LLDP parameters.\n"
#define SHOW_LLDP_STR "Show various LLDP settings.\n"
/* As of now same helpstring for both CONFIG and INTERFACE context
 * subjected to change when more commands are added
 */
#define INTF_LLDP_STR CONFIG_LLDP_STR
#define LLDP_TIMER_MAX_STRING_LENGTH 10
void
lldp_vty_init (void);

#endif /* _LLDP_VTY_H */
