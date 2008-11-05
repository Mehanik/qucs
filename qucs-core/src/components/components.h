/*
 * components.h - global component header file
 *
 * Copyright (C) 2003-2008 Stefan Jahn <stefan@lkcc.org>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this package; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street - Fifth Floor,
 * Boston, MA 02110-1301, USA.  
 *
 * $Id: components.h,v 1.5 2008-10-31 18:45:43 ela Exp $
 *
 */

#ifndef __COMPONENTS_H__
#define __COMPONENTS_H__

#include "complex.h"
#include "object.h"
#include "node.h"
#include "circuit.h"
#include "component_id.h"
#include "ground.h"
#include "open.h"
#include "short.h"
#include "tee.h"
#include "cross.h"
#include "itrafo.h"

#include "resistor.h"
#include "capacitor.h"
#include "inductor.h"
#include "mutual.h"
#include "mutual2.h"
#include "mutualx.h"
#include "vccs.h"
#include "cccs.h"
#include "ccvs.h"
#include "vcvs.h"
#include "dcblock.h"
#include "dcfeed.h"
#include "biastee.h"
#include "pac.h"
#include "attenuator.h"
#include "circulator.h"
#include "isolator.h"
#include "trafo.h"
#include "strafo.h"
#include "vdc.h"
#include "idc.h"
#include "vac.h"
#include "iac.h"
#include "vexp.h"
#include "iexp.h"
#include "vfile.h"
#include "ifile.h"
#include "vam.h"
#include "vpm.h"
#include "phaseshifter.h"
#include "gyrator.h"
#include "tswitch.h"
#include "relais.h"
#include "tline.h"
#include "coaxline.h"
#include "rectline.h"
#include "twistedpair.h"
#include "tline4p.h"
#include "iprobe.h"
#include "vprobe.h"
#include "spfile.h"
#include "vpulse.h"
#include "ipulse.h"
#include "vrect.h"
#include "irect.h"
#include "amplifier.h"
#include "opamp.h"
#include "coupler.h"
#include "rfedd.h"

#include "vnoise.h"
#include "inoise.h"
#include "iinoise.h"
#include "ivnoise.h"
#include "vvnoise.h"

#include "devices/diode.h"
#include "devices/jfet.h"
#include "devices/bjt.h"
#include "devices/mosfet.h"
#include "devices/eqndefined.h"
#include "devices/diac.h"
#include "devices/thyristor.h"
#include "devices/triac.h"

#include "microstrip/substrate.h"

#include "microstrip/msline.h"
#include "microstrip/mscorner.h"
#include "microstrip/msmbend.h"
#include "microstrip/msstep.h"
#include "microstrip/msopen.h"
#include "microstrip/msgap.h"
#include "microstrip/mscoupled.h"
#include "microstrip/mstee.h"
#include "microstrip/mscross.h"
#include "microstrip/msvia.h"
#include "microstrip/bondwire.h"

#include "microstrip/cpwline.h"
#include "microstrip/cpwopen.h"
#include "microstrip/cpwshort.h"
#include "microstrip/cpwgap.h"
#include "microstrip/cpwstep.h"

#include "digital/digital.h"
#include "digital/inverter.h"
#include "digital/nor.h"
#include "digital/or.h"
#include "digital/nand.h"
#include "digital/and.h"
#include "digital/xnor.h"
#include "digital/xor.h"
#include "digital/digisource.h"

#include "verilog/hicumL2V2p1.core.h"
#include "verilog/HBT_X.core.h"
#include "verilog/mod_amp.core.h"
#include "verilog/hic2_full.core.h"
#include "verilog/log_amp.core.h"
#include "verilog/hic0_full.core.h"
#include "verilog/potentiometer.core.h"
#include "verilog/MESFET.core.h"
#include "verilog/EKV26MOS.core.h"
#include "verilog/hicumL0V1p2.core.h"
#include "verilog/hicumL2V2p23.core.h"
#include "verilog/photodiode.core.h"

#endif /* __COMPONENTS_H__ */