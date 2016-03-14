/*
* include/linux/input/lps25.h
*
* STMicroelectronics LPS25 Pressure / Temperature Sensor module driver
*
* Copyright (C) 2014 STMicroelectronics- HESA BU - Environmental Sensor Application
* (adalberto.muhuho@st.com)
* The structure of this driver is based on reference code previously delivered
* by Lorenzo Sarchi
*
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, see <http://www.gnu.org/licenses> or
* write to the Free Software * Foundation, Inc., 51 Franklin St, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
*
*
*/
/******************************************************************************
 Revision history:

 Revision 0.0.1 2015/Dec/11:
	first (BETA) release

******************************************************************************/
#ifndef	__LPS22_H__
#define	__LPS22_H__

#define LPS22_PRS_MIN_POLL_PERIOD_MS	13
#define	LPS22_PRS_DEV_NAME		"lps22hb"

/* input define mappings */
#define ABS_PR		ABS_PRESSURE
#define ABS_TEMP	ABS_GAS

/*	Output conversion factors		*/
#define	LPS22HB_SENSITIVITY_T		100	/* =	LSB/degrC	*/
#define	LPS22HB_SENSITIVITY_P		4096	/* =	LSB/mbar	*/

#define	LPS22HB_TEMPERATURE_OFFSET	0

#ifdef __KERNEL__
struct lps22_prs_platform_data {
	int (*init)(void);
	void (*exit)(void);
	int (*power_on)(void);
	int (*power_off)(void);

	unsigned int poll_interval;
	unsigned int min_interval;
};

#endif /* __KERNEL__ */

#endif  /* __LPS22_H__ */
