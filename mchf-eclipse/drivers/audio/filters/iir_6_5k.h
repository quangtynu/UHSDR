/************************************************************************************
**                                                                                 **
**                               mcHF QRP Transceiver                              **
**                             K Atanassov - M0NKA 2014                            **
**                                                                                 **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:		CC BY-NC-SA 3.0                                                **
************************************************************************************/

#ifndef __IIR_6K5
#define __IIR_6K5
//
// alternative filter designed with MATLAB fdatools by DD4WH 2016-02-18
// 24k sampling rate, Lattice ARMA structure
// 10th order IIR Elliptic lowpass LPF
// Fpass 6500Hz
// Astop 60dB
// coefficients in reverse order than that spit out by MATLAB
//
//

const uint16_t IIR_6k5_numStages = 10;

const float IIR_6k5_LPF_pkCoeffs[] =
{
		0.213702079803504,
		-0.390726329295393,
		0.586645549319686,
		-0.429887036682493,
		0.895736972595422,
		-0.0875234251266855,
		0.991439058220713,
		0.0745020436698480,
		0.999490700886464,
		0.122410371569787
};

const float IIR_6k5_LPF_pvCoeffs[] =
{
		0.0311072717160539,
		0.147645149046583,
		0.316095562243594,
		0.320547362746078,
		0.0859079982599722,
		-0.0582045525665189,
		-0.0550274347397058,
		-3.62573178755987e-05,
		0.00708241752078387,
		0.000130934259420401,
		-6.94896100042891e-05
};


#endif