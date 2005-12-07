/*
 * applications.h - the Qucs application list
 *
 * Copyright (C) 2005 Stefan Jahn <stefan@lkcc.org>
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
 * $Id: applications.h,v 1.2 2005-12-06 16:22:07 raimi Exp $
 *
 */

#ifndef __APPLICATIONS_H__
#define __APPLICATIONS_H__

// Array containing all kinds of applications.
struct application_t eqn::applications[] = {
  { "+", TAG_DOUBLE,  evaluate::plus_d, 1, { TAG_DOUBLE  } },
  { "+", TAG_COMPLEX, evaluate::plus_c, 1, { TAG_COMPLEX } },
  { "+", TAG_VECTOR,  evaluate::plus_v, 1, { TAG_VECTOR  } },
  { "+", TAG_MATRIX,  evaluate::plus_m, 1, { TAG_MATRIX  } },
  { "+", TAG_MATVEC,  evaluate::plus_mv, 1, { TAG_MATVEC } },

  { "+", TAG_DOUBLE,  evaluate::plus_d_d, 2, { TAG_DOUBLE,  TAG_DOUBLE  } },
  { "+", TAG_COMPLEX, evaluate::plus_c_c, 2, { TAG_COMPLEX, TAG_COMPLEX } },
  { "+", TAG_COMPLEX, evaluate::plus_c_d, 2, { TAG_COMPLEX, TAG_DOUBLE  } },
  { "+", TAG_COMPLEX, evaluate::plus_d_c, 2, { TAG_DOUBLE,  TAG_COMPLEX } },
  { "+", TAG_VECTOR,  evaluate::plus_v_d, 2, { TAG_VECTOR,  TAG_DOUBLE  } },
  { "+", TAG_VECTOR,  evaluate::plus_d_v, 2, { TAG_DOUBLE,  TAG_VECTOR  } },
  { "+", TAG_VECTOR,  evaluate::plus_v_c, 2, { TAG_VECTOR,  TAG_COMPLEX } },
  { "+", TAG_VECTOR,  evaluate::plus_c_v, 2, { TAG_COMPLEX, TAG_VECTOR  } },
  { "+", TAG_VECTOR,  evaluate::plus_v_v, 2, { TAG_VECTOR,  TAG_VECTOR  } },
  { "+", TAG_MATRIX,  evaluate::plus_m_m, 2, { TAG_MATRIX,  TAG_MATRIX  } },
  { "+", TAG_STRING,  evaluate::plus_s_s, 2, { TAG_STRING,  TAG_STRING  } },
  { "+", TAG_STRING,  evaluate::plus_c_s, 2, { TAG_CHAR,    TAG_STRING  } },
  { "+", TAG_STRING,  evaluate::plus_s_c, 2, { TAG_STRING,  TAG_CHAR    } },
  { "+", TAG_MATVEC,  evaluate::plus_mv_mv, 2, { TAG_MATVEC, TAG_MATVEC } },
  { "+", TAG_MATVEC,  evaluate::plus_mv_m, 2, { TAG_MATVEC, TAG_MATRIX  } },
  { "+", TAG_MATVEC,  evaluate::plus_m_mv, 2, { TAG_MATRIX, TAG_MATVEC  } },

  { "-", TAG_DOUBLE,  evaluate::minus_d, 1, { TAG_DOUBLE  } },
  { "-", TAG_COMPLEX, evaluate::minus_c, 1, { TAG_COMPLEX } },
  { "-", TAG_VECTOR,  evaluate::minus_v, 1, { TAG_VECTOR  } },
  { "-", TAG_MATRIX,  evaluate::minus_m, 1, { TAG_MATRIX  } },
  { "-", TAG_MATVEC,  evaluate::minus_mv, 1, { TAG_MATVEC } },

  { "-", TAG_DOUBLE,  evaluate::minus_d_d, 2, { TAG_DOUBLE,  TAG_DOUBLE  } },
  { "-", TAG_COMPLEX, evaluate::minus_c_c, 2, { TAG_COMPLEX, TAG_COMPLEX } },
  { "-", TAG_COMPLEX, evaluate::minus_c_d, 2, { TAG_COMPLEX, TAG_DOUBLE  } },
  { "-", TAG_COMPLEX, evaluate::minus_d_c, 2, { TAG_DOUBLE,  TAG_COMPLEX } },
  { "-", TAG_VECTOR,  evaluate::minus_v_d, 2, { TAG_VECTOR,  TAG_DOUBLE  } },
  { "-", TAG_VECTOR,  evaluate::minus_d_v, 2, { TAG_DOUBLE,  TAG_VECTOR  } },
  { "-", TAG_VECTOR,  evaluate::minus_v_c, 2, { TAG_VECTOR,  TAG_COMPLEX } },
  { "-", TAG_VECTOR,  evaluate::minus_c_v, 2, { TAG_COMPLEX, TAG_VECTOR  } },
  { "-", TAG_VECTOR,  evaluate::minus_v_v, 2, { TAG_VECTOR,  TAG_VECTOR  } },
  { "-", TAG_MATRIX,  evaluate::minus_m_m, 2, { TAG_MATRIX,  TAG_MATRIX  } },
  { "-", TAG_MATVEC,  evaluate::minus_mv_mv, 2, { TAG_MATVEC, TAG_MATVEC } },
  { "-", TAG_MATVEC,  evaluate::minus_mv_m, 2, { TAG_MATVEC, TAG_MATRIX  } },
  { "-", TAG_MATVEC,  evaluate::minus_m_mv, 2, { TAG_MATRIX, TAG_MATVEC  } },

  { "*", TAG_DOUBLE,  evaluate::times_d_d, 2, { TAG_DOUBLE,  TAG_DOUBLE  } },
  { "*", TAG_COMPLEX, evaluate::times_c_c, 2, { TAG_COMPLEX, TAG_COMPLEX } },
  { "*", TAG_COMPLEX, evaluate::times_c_d, 2, { TAG_COMPLEX, TAG_DOUBLE  } },
  { "*", TAG_COMPLEX, evaluate::times_d_c, 2, { TAG_DOUBLE,  TAG_COMPLEX } },
  { "*", TAG_VECTOR,  evaluate::times_v_d, 2, { TAG_VECTOR,  TAG_DOUBLE  } },
  { "*", TAG_VECTOR,  evaluate::times_d_v, 2, { TAG_DOUBLE,  TAG_VECTOR  } },
  { "*", TAG_VECTOR,  evaluate::times_v_c, 2, { TAG_VECTOR,  TAG_COMPLEX } },
  { "*", TAG_VECTOR,  evaluate::times_c_v, 2, { TAG_COMPLEX, TAG_VECTOR  } },
  { "*", TAG_VECTOR,  evaluate::times_v_v, 2, { TAG_VECTOR,  TAG_VECTOR  } },
  { "*", TAG_MATRIX,  evaluate::times_m_m, 2, { TAG_MATRIX,  TAG_MATRIX  } },
  { "*", TAG_MATRIX,  evaluate::times_m_c, 2, { TAG_MATRIX,  TAG_COMPLEX } },
  { "*", TAG_MATRIX,  evaluate::times_c_m, 2, { TAG_COMPLEX, TAG_MATRIX  } },
  { "*", TAG_MATRIX,  evaluate::times_m_d, 2, { TAG_MATRIX,  TAG_DOUBLE  } },
  { "*", TAG_MATRIX,  evaluate::times_d_m, 2, { TAG_DOUBLE,  TAG_MATRIX  } },
  { "*", TAG_MATVEC,  evaluate::times_mv_mv, 2, { TAG_MATVEC,TAG_MATVEC  } },
  { "*", TAG_MATVEC,  evaluate::times_mv_c, 2, { TAG_MATVEC, TAG_COMPLEX } },
  { "*", TAG_MATVEC,  evaluate::times_c_mv, 2, { TAG_COMPLEX,TAG_MATVEC  } },
  { "*", TAG_MATVEC,  evaluate::times_mv_d, 2, { TAG_MATVEC, TAG_DOUBLE  } },
  { "*", TAG_MATVEC,  evaluate::times_d_mv, 2, { TAG_DOUBLE, TAG_MATVEC  } },
  { "*", TAG_MATVEC,  evaluate::times_mv_v, 2, { TAG_MATVEC, TAG_VECTOR  } },
  { "*", TAG_MATVEC,  evaluate::times_v_mv, 2, { TAG_VECTOR, TAG_MATVEC  } },

  { "/", TAG_DOUBLE,  evaluate::over_d_d, 2, { TAG_DOUBLE,  TAG_DOUBLE  } },
  { "/", TAG_COMPLEX, evaluate::over_c_c, 2, { TAG_COMPLEX, TAG_COMPLEX } },
  { "/", TAG_COMPLEX, evaluate::over_c_d, 2, { TAG_COMPLEX, TAG_DOUBLE  } },
  { "/", TAG_COMPLEX, evaluate::over_d_c, 2, { TAG_DOUBLE,  TAG_COMPLEX } },
  { "/", TAG_VECTOR,  evaluate::over_v_d, 2, { TAG_VECTOR,  TAG_DOUBLE  } },
  { "/", TAG_VECTOR,  evaluate::over_d_v, 2, { TAG_DOUBLE,  TAG_VECTOR  } },
  { "/", TAG_VECTOR,  evaluate::over_v_c, 2, { TAG_VECTOR,  TAG_COMPLEX } },
  { "/", TAG_VECTOR,  evaluate::over_c_v, 2, { TAG_COMPLEX, TAG_VECTOR  } },
  { "/", TAG_VECTOR,  evaluate::over_v_v, 2, { TAG_VECTOR,  TAG_VECTOR  } },
  { "/", TAG_MATRIX,  evaluate::over_m_c, 2, { TAG_MATRIX,  TAG_COMPLEX } },
  { "/", TAG_MATRIX,  evaluate::over_m_d, 2, { TAG_MATRIX,  TAG_DOUBLE  } },
  { "/", TAG_MATVEC,  evaluate::over_mv_c, 2, { TAG_MATVEC, TAG_COMPLEX } },
  { "/", TAG_MATVEC,  evaluate::over_mv_d, 2, { TAG_MATVEC, TAG_DOUBLE  } },
  { "/", TAG_MATVEC,  evaluate::over_mv_v, 2, { TAG_MATVEC, TAG_VECTOR  } },

  { "%", TAG_DOUBLE,  evaluate::modulo_d_d, 2, { TAG_DOUBLE,  TAG_DOUBLE  } },
  { "%", TAG_COMPLEX, evaluate::modulo_c_c, 2, { TAG_COMPLEX, TAG_COMPLEX } },
  { "%", TAG_COMPLEX, evaluate::modulo_c_d, 2, { TAG_COMPLEX, TAG_DOUBLE  } },
  { "%", TAG_COMPLEX, evaluate::modulo_d_c, 2, { TAG_DOUBLE,  TAG_COMPLEX } },
  { "%", TAG_VECTOR,  evaluate::modulo_v_d, 2, { TAG_VECTOR,  TAG_DOUBLE  } },
  { "%", TAG_VECTOR,  evaluate::modulo_d_v, 2, { TAG_DOUBLE,  TAG_VECTOR  } },
  { "%", TAG_VECTOR,  evaluate::modulo_v_c, 2, { TAG_VECTOR,  TAG_COMPLEX } },
  { "%", TAG_VECTOR,  evaluate::modulo_c_v, 2, { TAG_COMPLEX, TAG_VECTOR  } },
  { "%", TAG_VECTOR,  evaluate::modulo_v_v, 2, { TAG_VECTOR,  TAG_VECTOR  } },

  { "^", TAG_DOUBLE,  evaluate::power_d_d, 2, { TAG_DOUBLE,  TAG_DOUBLE  } },
  { "^", TAG_COMPLEX, evaluate::power_c_c, 2, { TAG_COMPLEX, TAG_COMPLEX } },
  { "^", TAG_COMPLEX, evaluate::power_c_d, 2, { TAG_COMPLEX, TAG_DOUBLE  } },
  { "^", TAG_COMPLEX, evaluate::power_d_c, 2, { TAG_DOUBLE,  TAG_COMPLEX } },
  { "^", TAG_VECTOR,  evaluate::power_v_d, 2, { TAG_VECTOR,  TAG_DOUBLE  } },
  { "^", TAG_VECTOR,  evaluate::power_d_v, 2, { TAG_DOUBLE,  TAG_VECTOR  } },
  { "^", TAG_VECTOR,  evaluate::power_v_c, 2, { TAG_VECTOR,  TAG_COMPLEX } },
  { "^", TAG_VECTOR,  evaluate::power_c_v, 2, { TAG_COMPLEX, TAG_VECTOR  } },
  { "^", TAG_VECTOR,  evaluate::power_v_v, 2, { TAG_VECTOR,  TAG_VECTOR  } },

  { "real", TAG_DOUBLE,  evaluate::real_d, 1, { TAG_DOUBLE  } },
  { "real", TAG_DOUBLE,  evaluate::real_c, 1, { TAG_COMPLEX } },
  { "real", TAG_VECTOR,  evaluate::real_v, 1, { TAG_VECTOR  } },
  { "real", TAG_MATRIX,  evaluate::real_m, 1, { TAG_MATRIX  } },
  { "real", TAG_MATVEC,  evaluate::real_mv, 1, { TAG_MATVEC } },

  { "imag", TAG_DOUBLE,  evaluate::imag_d, 1, { TAG_DOUBLE  } },
  { "imag", TAG_DOUBLE,  evaluate::imag_c, 1, { TAG_COMPLEX } },
  { "imag", TAG_VECTOR,  evaluate::imag_v, 1, { TAG_VECTOR  } },
  { "imag", TAG_MATRIX,  evaluate::imag_m, 1, { TAG_MATRIX  } },
  { "imag", TAG_MATVEC,  evaluate::imag_mv, 1, { TAG_MATVEC } },

  { "abs", TAG_DOUBLE,  evaluate::abs_d, 1, { TAG_DOUBLE  } },
  { "abs", TAG_DOUBLE,  evaluate::abs_c, 1, { TAG_COMPLEX } },
  { "abs", TAG_VECTOR,  evaluate::abs_v, 1, { TAG_VECTOR  } },
  { "abs", TAG_MATRIX,  evaluate::abs_m, 1, { TAG_MATRIX  } },
  { "abs", TAG_MATVEC,  evaluate::abs_mv, 1, { TAG_MATVEC } },

  { "mag", TAG_DOUBLE,  evaluate::abs_d, 1, { TAG_DOUBLE  } },
  { "mag", TAG_DOUBLE,  evaluate::abs_c, 1, { TAG_COMPLEX } },
  { "mag", TAG_VECTOR,  evaluate::abs_v, 1, { TAG_VECTOR  } },
  { "mag", TAG_MATRIX,  evaluate::abs_m, 1, { TAG_MATRIX  } },
  { "mag", TAG_MATVEC,  evaluate::abs_mv, 1, { TAG_MATVEC } },

  { "conj", TAG_DOUBLE,  evaluate::conj_d,  1, { TAG_DOUBLE  } },
  { "conj", TAG_COMPLEX, evaluate::conj_c,  1, { TAG_COMPLEX } },
  { "conj", TAG_VECTOR,  evaluate::conj_v,  1, { TAG_VECTOR  } },
  { "conj", TAG_MATRIX,  evaluate::conj_m,  1, { TAG_MATRIX  } },
  { "conj", TAG_MATVEC,  evaluate::conj_mv, 1, { TAG_MATVEC  } },

  { "norm", TAG_DOUBLE,  evaluate::norm_d, 1, { TAG_DOUBLE  } },
  { "norm", TAG_DOUBLE,  evaluate::norm_c, 1, { TAG_COMPLEX } },
  { "norm", TAG_VECTOR,  evaluate::norm_v, 1, { TAG_VECTOR  } },

  { "phase", TAG_DOUBLE,  evaluate::phase_d, 1, { TAG_DOUBLE  } },
  { "phase", TAG_DOUBLE,  evaluate::phase_c, 1, { TAG_COMPLEX } },
  { "phase", TAG_VECTOR,  evaluate::phase_v, 1, { TAG_VECTOR  } },
  { "phase", TAG_MATRIX,  evaluate::phase_m,  1, { TAG_MATRIX } },
  { "phase", TAG_MATVEC,  evaluate::phase_mv, 1, { TAG_MATVEC } },

  { "angle", TAG_DOUBLE,  evaluate::arg_d, 1, { TAG_DOUBLE  } },
  { "angle", TAG_DOUBLE,  evaluate::arg_c, 1, { TAG_COMPLEX } },
  { "angle", TAG_VECTOR,  evaluate::arg_v, 1, { TAG_VECTOR  } },
  { "angle", TAG_MATRIX,  evaluate::arg_m,  1, { TAG_MATRIX } },
  { "angle", TAG_MATVEC,  evaluate::arg_mv, 1, { TAG_MATVEC } },

  { "arg", TAG_DOUBLE,  evaluate::arg_d, 1, { TAG_DOUBLE  } },
  { "arg", TAG_DOUBLE,  evaluate::arg_c, 1, { TAG_COMPLEX } },
  { "arg", TAG_VECTOR,  evaluate::arg_v, 1, { TAG_VECTOR  } },
  { "arg", TAG_MATRIX,  evaluate::arg_m,  1, { TAG_MATRIX } },
  { "arg", TAG_MATVEC,  evaluate::arg_mv, 1, { TAG_MATVEC } },

  { "unwrap", TAG_VECTOR,  evaluate::unwrap_v_1, 1, { TAG_VECTOR  } },
  { "unwrap", TAG_VECTOR,  evaluate::unwrap_v_2, 2,
    { TAG_VECTOR, TAG_DOUBLE } },

  { "deg2rad", TAG_DOUBLE,  evaluate::deg2rad_d, 1, { TAG_DOUBLE  } },
  { "deg2rad", TAG_DOUBLE,  evaluate::deg2rad_c, 1, { TAG_COMPLEX } },
  { "deg2rad", TAG_VECTOR,  evaluate::deg2rad_v, 1, { TAG_VECTOR  } },
  { "rad2deg", TAG_DOUBLE,  evaluate::rad2deg_d, 1, { TAG_DOUBLE  } },
  { "rad2deg", TAG_DOUBLE,  evaluate::rad2deg_c, 1, { TAG_COMPLEX } },
  { "rad2deg", TAG_VECTOR,  evaluate::rad2deg_v, 1, { TAG_VECTOR  } },

  { "dB", TAG_DOUBLE,  evaluate::dB_d, 1, { TAG_DOUBLE  } },
  { "dB", TAG_DOUBLE,  evaluate::dB_c, 1, { TAG_COMPLEX } },
  { "dB", TAG_VECTOR,  evaluate::dB_v, 1, { TAG_VECTOR  } },

  { "sqrt", TAG_COMPLEX, evaluate::sqrt_d, 1, { TAG_DOUBLE } },
  { "sqrt", TAG_COMPLEX, evaluate::sqrt_c, 1, { TAG_COMPLEX } },
  { "sqrt", TAG_VECTOR,  evaluate::sqrt_v, 1, { TAG_VECTOR  } },

  { "exp", TAG_DOUBLE,  evaluate::exp_d, 1, { TAG_DOUBLE  } },
  { "exp", TAG_COMPLEX, evaluate::exp_c, 1, { TAG_COMPLEX } },
  { "exp", TAG_VECTOR,  evaluate::exp_v, 1, { TAG_VECTOR  } },

  { "ln", TAG_COMPLEX, evaluate::ln_d, 1, { TAG_DOUBLE  } },
  { "ln", TAG_COMPLEX, evaluate::ln_c, 1, { TAG_COMPLEX } },
  { "ln", TAG_VECTOR,  evaluate::ln_v, 1, { TAG_VECTOR  } },

  { "log10", TAG_COMPLEX, evaluate::log10_d, 1, { TAG_DOUBLE  } },
  { "log10", TAG_COMPLEX, evaluate::log10_c, 1, { TAG_COMPLEX } },
  { "log10", TAG_VECTOR,  evaluate::log10_v, 1, { TAG_VECTOR  } },

  { "log2", TAG_COMPLEX, evaluate::log2_d, 1, { TAG_DOUBLE  } },
  { "log2", TAG_COMPLEX, evaluate::log2_c, 1, { TAG_COMPLEX } },
  { "log2", TAG_VECTOR,  evaluate::log2_v, 1, { TAG_VECTOR  } },

  { "sin", TAG_DOUBLE,  evaluate::sin_d, 1, { TAG_DOUBLE  } },
  { "sin", TAG_COMPLEX, evaluate::sin_c, 1, { TAG_COMPLEX } },
  { "sin", TAG_VECTOR,  evaluate::sin_v, 1, { TAG_VECTOR  } },

  { "arcsin", TAG_DOUBLE,  evaluate::arcsin_d, 1, { TAG_DOUBLE  } },
  { "arcsin", TAG_COMPLEX, evaluate::arcsin_c, 1, { TAG_COMPLEX } },
  { "arcsin", TAG_VECTOR,  evaluate::arcsin_v, 1, { TAG_VECTOR  } },

  { "cos", TAG_DOUBLE,  evaluate::cos_d, 1, { TAG_DOUBLE  } },
  { "cos", TAG_COMPLEX, evaluate::cos_c, 1, { TAG_COMPLEX } },
  { "cos", TAG_VECTOR,  evaluate::cos_v, 1, { TAG_VECTOR  } },

  { "arccos", TAG_DOUBLE,  evaluate::arccos_d, 1, { TAG_DOUBLE  } },
  { "arccos", TAG_COMPLEX, evaluate::arccos_c, 1, { TAG_COMPLEX } },
  { "arccos", TAG_VECTOR,  evaluate::arccos_v, 1, { TAG_VECTOR  } },

  { "tan", TAG_DOUBLE,  evaluate::tan_d, 1, { TAG_DOUBLE  } },
  { "tan", TAG_COMPLEX, evaluate::tan_c, 1, { TAG_COMPLEX } },
  { "tan", TAG_VECTOR,  evaluate::tan_v, 1, { TAG_VECTOR  } },

  { "arctan", TAG_DOUBLE,  evaluate::arctan_d, 1, { TAG_DOUBLE  } },
  { "arctan", TAG_COMPLEX, evaluate::arctan_c, 1, { TAG_COMPLEX } },
  { "arctan", TAG_VECTOR,  evaluate::arctan_v, 1, { TAG_VECTOR  } },

  { "cot", TAG_DOUBLE,  evaluate::cot_d, 1, { TAG_DOUBLE  } },
  { "cot", TAG_COMPLEX, evaluate::cot_c, 1, { TAG_COMPLEX } },
  { "cot", TAG_VECTOR,  evaluate::cot_v, 1, { TAG_VECTOR  } },

  { "arccot", TAG_DOUBLE,  evaluate::arccot_d, 1, { TAG_DOUBLE  } },
  { "arccot", TAG_COMPLEX, evaluate::arccot_c, 1, { TAG_COMPLEX } },
  { "arccot", TAG_VECTOR,  evaluate::arccot_v, 1, { TAG_VECTOR  } },

  { "sec", TAG_DOUBLE,  evaluate::sec_d, 1, { TAG_DOUBLE  } },
  { "sec", TAG_COMPLEX, evaluate::sec_c, 1, { TAG_COMPLEX } },
  { "sec", TAG_VECTOR,  evaluate::sec_v, 1, { TAG_VECTOR  } },

  { "cosec", TAG_DOUBLE,  evaluate::cosec_d, 1, { TAG_DOUBLE  } },
  { "cosec", TAG_COMPLEX, evaluate::cosec_c, 1, { TAG_COMPLEX } },
  { "cosec", TAG_VECTOR,  evaluate::cosec_v, 1, { TAG_VECTOR  } },

  { "sinh", TAG_DOUBLE,  evaluate::sinh_d, 1, { TAG_DOUBLE  } },
  { "sinh", TAG_COMPLEX, evaluate::sinh_c, 1, { TAG_COMPLEX } },
  { "sinh", TAG_VECTOR,  evaluate::sinh_v, 1, { TAG_VECTOR  } },

  { "arsinh", TAG_DOUBLE,  evaluate::arsinh_d, 1, { TAG_DOUBLE  } },
  { "arsinh", TAG_COMPLEX, evaluate::arsinh_c, 1, { TAG_COMPLEX } },
  { "arsinh", TAG_VECTOR,  evaluate::arsinh_v, 1, { TAG_VECTOR  } },

  { "cosh", TAG_DOUBLE,  evaluate::cosh_d, 1, { TAG_DOUBLE  } },
  { "cosh", TAG_COMPLEX, evaluate::cosh_c, 1, { TAG_COMPLEX } },
  { "cosh", TAG_VECTOR,  evaluate::cosh_v, 1, { TAG_VECTOR  } },

  { "arcosh", TAG_DOUBLE,  evaluate::arcosh_d, 1, { TAG_DOUBLE  } },
  { "arcosh", TAG_COMPLEX, evaluate::arcosh_c, 1, { TAG_COMPLEX } },
  { "arcosh", TAG_VECTOR,  evaluate::arcosh_v, 1, { TAG_VECTOR  } },

  { "tanh", TAG_DOUBLE,  evaluate::tanh_d, 1, { TAG_DOUBLE  } },
  { "tanh", TAG_COMPLEX, evaluate::tanh_c, 1, { TAG_COMPLEX } },
  { "tanh", TAG_VECTOR,  evaluate::tanh_v, 1, { TAG_VECTOR  } },

  { "artanh", TAG_DOUBLE,  evaluate::artanh_d, 1, { TAG_DOUBLE  } },
  { "artanh", TAG_COMPLEX, evaluate::artanh_c, 1, { TAG_COMPLEX } },
  { "artanh", TAG_VECTOR,  evaluate::artanh_v, 1, { TAG_VECTOR  } },

  { "coth", TAG_DOUBLE,  evaluate::coth_d, 1, { TAG_DOUBLE  } },
  { "coth", TAG_COMPLEX, evaluate::coth_c, 1, { TAG_COMPLEX } },
  { "coth", TAG_VECTOR,  evaluate::coth_v, 1, { TAG_VECTOR  } },

  { "sech", TAG_DOUBLE,  evaluate::sech_d, 1, { TAG_DOUBLE  } },
  { "sech", TAG_COMPLEX, evaluate::sech_c, 1, { TAG_COMPLEX } },
  { "sech", TAG_VECTOR,  evaluate::sech_v, 1, { TAG_VECTOR  } },

  { "cosech", TAG_DOUBLE,  evaluate::cosech_d, 1, { TAG_DOUBLE  } },
  { "cosech", TAG_COMPLEX, evaluate::cosech_c, 1, { TAG_COMPLEX } },
  { "cosech", TAG_VECTOR,  evaluate::cosech_v, 1, { TAG_VECTOR  } },

  { "arcoth", TAG_DOUBLE,  evaluate::arcoth_d, 1, { TAG_DOUBLE  } },
  { "arcoth", TAG_COMPLEX, evaluate::arcoth_c, 1, { TAG_COMPLEX } },
  { "arcoth", TAG_VECTOR,  evaluate::arcoth_v, 1, { TAG_VECTOR  } },

  { "ztor", TAG_DOUBLE,  evaluate::ztor_d, 1, { TAG_DOUBLE } },
  { "ztor", TAG_DOUBLE,  evaluate::ztor_d_d, 2, { TAG_DOUBLE, TAG_DOUBLE } },
  { "ztor", TAG_COMPLEX, evaluate::ztor_d_c, 2, { TAG_DOUBLE, TAG_COMPLEX } },
  { "ztor", TAG_COMPLEX, evaluate::ztor_c, 1, { TAG_COMPLEX } },
  { "ztor", TAG_COMPLEX, evaluate::ztor_c_d, 2, { TAG_COMPLEX, TAG_DOUBLE } },
  { "ztor", TAG_COMPLEX, evaluate::ztor_c_c, 2, { TAG_COMPLEX, TAG_COMPLEX } },
  { "ztor", TAG_VECTOR,  evaluate::ztor_v, 1, { TAG_VECTOR } },
  { "ztor", TAG_VECTOR,  evaluate::ztor_v_d, 2, { TAG_VECTOR, TAG_DOUBLE } },
  { "ztor", TAG_VECTOR,  evaluate::ztor_v_c, 2, { TAG_VECTOR, TAG_COMPLEX } },

  { "rtoz", TAG_DOUBLE,  evaluate::rtoz_d, 1, { TAG_DOUBLE } },
  { "rtoz", TAG_DOUBLE,  evaluate::rtoz_d_d, 2, { TAG_DOUBLE, TAG_DOUBLE } },
  { "rtoz", TAG_COMPLEX, evaluate::rtoz_d_c, 2, { TAG_DOUBLE, TAG_COMPLEX } },
  { "rtoz", TAG_COMPLEX, evaluate::rtoz_c, 1, { TAG_COMPLEX } },
  { "rtoz", TAG_COMPLEX, evaluate::rtoz_c_d, 2, { TAG_COMPLEX, TAG_DOUBLE } },
  { "rtoz", TAG_COMPLEX, evaluate::rtoz_c_c, 2, { TAG_COMPLEX, TAG_COMPLEX } },
  { "rtoz", TAG_VECTOR,  evaluate::rtoz_v, 1, { TAG_VECTOR } },
  { "rtoz", TAG_VECTOR,  evaluate::rtoz_v_d, 2, { TAG_VECTOR, TAG_DOUBLE } },
  { "rtoz", TAG_VECTOR,  evaluate::rtoz_v_c, 2, { TAG_VECTOR, TAG_COMPLEX } },

  { "ytor", TAG_DOUBLE,  evaluate::ytor_d, 1, { TAG_DOUBLE } },
  { "ytor", TAG_DOUBLE,  evaluate::ytor_d_d, 2, { TAG_DOUBLE, TAG_DOUBLE } },
  { "ytor", TAG_COMPLEX, evaluate::ytor_d_c, 2, { TAG_DOUBLE, TAG_COMPLEX } },
  { "ytor", TAG_COMPLEX, evaluate::ytor_c, 1, { TAG_COMPLEX } },
  { "ytor", TAG_COMPLEX, evaluate::ytor_c_d, 2, { TAG_COMPLEX, TAG_DOUBLE } },
  { "ytor", TAG_COMPLEX, evaluate::ytor_c_c, 2, { TAG_COMPLEX, TAG_COMPLEX } },
  { "ytor", TAG_VECTOR,  evaluate::ytor_v, 1, { TAG_VECTOR } },
  { "ytor", TAG_VECTOR,  evaluate::ytor_v_d, 2, { TAG_VECTOR, TAG_DOUBLE } },
  { "ytor", TAG_VECTOR,  evaluate::ytor_v_c, 2, { TAG_VECTOR, TAG_COMPLEX } },

  { "rtoy", TAG_DOUBLE,  evaluate::rtoy_d, 1, { TAG_DOUBLE } },
  { "rtoy", TAG_DOUBLE,  evaluate::rtoy_d_d, 2, { TAG_DOUBLE, TAG_DOUBLE } },
  { "rtoy", TAG_COMPLEX, evaluate::rtoy_d_c, 2, { TAG_DOUBLE, TAG_COMPLEX } },
  { "rtoy", TAG_COMPLEX, evaluate::rtoy_c, 1, { TAG_COMPLEX } },
  { "rtoy", TAG_COMPLEX, evaluate::rtoy_c_d, 2, { TAG_COMPLEX, TAG_DOUBLE } },
  { "rtoy", TAG_COMPLEX, evaluate::rtoy_c_c, 2, { TAG_COMPLEX, TAG_COMPLEX } },
  { "rtoy", TAG_VECTOR,  evaluate::rtoy_v, 1, { TAG_VECTOR } },
  { "rtoy", TAG_VECTOR,  evaluate::rtoy_v_d, 2, { TAG_VECTOR, TAG_DOUBLE } },
  { "rtoy", TAG_VECTOR,  evaluate::rtoy_v_c, 2, { TAG_VECTOR, TAG_COMPLEX } },

  { "rtoswr", TAG_DOUBLE, evaluate::rtoswr_d, 1, { TAG_DOUBLE  } },
  { "rtoswr", TAG_DOUBLE, evaluate::rtoswr_c, 1, { TAG_COMPLEX } },
  { "rtoswr", TAG_VECTOR, evaluate::rtoswr_v, 1, { TAG_VECTOR  } },

  { "diff", TAG_VECTOR, evaluate::diff_v_2, 2, { TAG_VECTOR, TAG_VECTOR } },
  { "diff", TAG_VECTOR, evaluate::diff_v_3, 3, { TAG_VECTOR, TAG_VECTOR,
						 TAG_DOUBLE } },

  { "max", TAG_DOUBLE,  evaluate::max_d, 1, { TAG_DOUBLE  } },
  { "max", TAG_DOUBLE,  evaluate::max_c, 1, { TAG_COMPLEX } },
  { "max", TAG_DOUBLE,  evaluate::max_v, 1, { TAG_VECTOR  } },

  { "min", TAG_DOUBLE,  evaluate::min_d, 1, { TAG_DOUBLE  } },
  { "min", TAG_DOUBLE,  evaluate::min_c, 1, { TAG_COMPLEX } },
  { "min", TAG_DOUBLE,  evaluate::min_v, 1, { TAG_VECTOR  } },

  { "sum", TAG_DOUBLE,  evaluate::sum_d, 1, { TAG_DOUBLE  } },
  { "sum", TAG_COMPLEX, evaluate::sum_c, 1, { TAG_COMPLEX } },
  { "sum", TAG_COMPLEX, evaluate::sum_v, 1, { TAG_VECTOR  } },

  { "prod", TAG_DOUBLE,  evaluate::prod_d, 1, { TAG_DOUBLE  } },
  { "prod", TAG_COMPLEX, evaluate::prod_c, 1, { TAG_COMPLEX } },
  { "prod", TAG_COMPLEX, evaluate::prod_v, 1, { TAG_VECTOR  } },

  { "avg", TAG_DOUBLE,  evaluate::avg_d, 1, { TAG_DOUBLE  } },
  { "avg", TAG_COMPLEX, evaluate::avg_c, 1, { TAG_COMPLEX } },
  { "avg", TAG_COMPLEX, evaluate::avg_v, 1, { TAG_VECTOR  } },

  { "array", TAG_VECTOR, evaluate::index_mv_2, 3,
    { TAG_MATVEC, TAG_DOUBLE, TAG_DOUBLE } },
  { "array", TAG_MATRIX, evaluate::index_mv_1, 2,
    { TAG_MATVEC, TAG_DOUBLE } },
  { "array", TAG_VECTOR,  evaluate::index_v_1, 2,
    { TAG_VECTOR, TAG_DOUBLE | TAG_RANGE } },
  { "array", TAG_VECTOR,  evaluate::index_v_2, 3,
    { TAG_VECTOR, TAG_DOUBLE | TAG_RANGE, TAG_DOUBLE | TAG_RANGE } },
  { "array", TAG_COMPLEX, evaluate::index_m_2, 3,
    { TAG_MATRIX, TAG_DOUBLE, TAG_DOUBLE } },
  { "array", TAG_CHAR, evaluate::index_s_1, 2, { TAG_STRING, TAG_DOUBLE } },

  { "stos", TAG_MATRIX, evaluate::stos_m_d,   2, { TAG_MATRIX, TAG_DOUBLE } },
  { "stos", TAG_MATRIX, evaluate::stos_m_d_d, 3, { TAG_MATRIX, TAG_DOUBLE,
						   TAG_DOUBLE } },
  { "stos", TAG_MATRIX, evaluate::stos_m_d_c, 3, { TAG_MATRIX, TAG_DOUBLE,
						   TAG_COMPLEX } },
  { "stos", TAG_MATRIX, evaluate::stos_m_d_v, 3, { TAG_MATRIX, TAG_DOUBLE,
						   TAG_VECTOR } },
  { "stos", TAG_MATRIX, evaluate::stos_m_c,   2, { TAG_MATRIX, TAG_COMPLEX } },
  { "stos", TAG_MATRIX, evaluate::stos_m_c_d, 3, { TAG_MATRIX, TAG_COMPLEX,
						   TAG_DOUBLE } },
  { "stos", TAG_MATRIX, evaluate::stos_m_c_c, 3, { TAG_MATRIX, TAG_COMPLEX,
						   TAG_COMPLEX } },
  { "stos", TAG_MATRIX, evaluate::stos_m_c_v, 3, { TAG_MATRIX, TAG_COMPLEX,
						   TAG_VECTOR } },
  { "stos", TAG_MATRIX, evaluate::stos_m_v,   2, { TAG_MATRIX, TAG_VECTOR } },
  { "stos", TAG_MATRIX, evaluate::stos_m_v_d, 3, { TAG_MATRIX, TAG_VECTOR,
						   TAG_DOUBLE } },
  { "stos", TAG_MATRIX, evaluate::stos_m_v_c, 3, { TAG_MATRIX, TAG_VECTOR,
						   TAG_COMPLEX } },
  { "stos", TAG_MATRIX, evaluate::stos_m_v_v, 3, { TAG_MATRIX, TAG_VECTOR,
						   TAG_VECTOR } },

  { "stos", TAG_MATVEC, evaluate::stos_mv_d,   2, { TAG_MATVEC, TAG_DOUBLE } },
  { "stos", TAG_MATVEC, evaluate::stos_mv_d_d, 3, { TAG_MATVEC, TAG_DOUBLE,
						    TAG_DOUBLE } },
  { "stos", TAG_MATVEC, evaluate::stos_mv_d_c, 3, { TAG_MATVEC, TAG_DOUBLE,
						    TAG_COMPLEX } },
  { "stos", TAG_MATVEC, evaluate::stos_mv_d_v, 3, { TAG_MATVEC, TAG_DOUBLE,
						    TAG_VECTOR } },
  { "stos", TAG_MATVEC, evaluate::stos_mv_c,   2, { TAG_MATVEC,
						    TAG_COMPLEX } },
  { "stos", TAG_MATVEC, evaluate::stos_mv_c_d, 3, { TAG_MATVEC, TAG_COMPLEX,
						    TAG_DOUBLE } },
  { "stos", TAG_MATVEC, evaluate::stos_mv_c_c, 3, { TAG_MATVEC, TAG_COMPLEX,
						    TAG_COMPLEX } },
  { "stos", TAG_MATVEC, evaluate::stos_mv_c_v, 3, { TAG_MATVEC, TAG_COMPLEX,
						    TAG_VECTOR } },
  { "stos", TAG_MATVEC, evaluate::stos_mv_v,   2, { TAG_MATVEC, TAG_VECTOR } },
  { "stos", TAG_MATVEC, evaluate::stos_mv_v_d, 3, { TAG_MATVEC, TAG_VECTOR,
						    TAG_DOUBLE } },
  { "stos", TAG_MATVEC, evaluate::stos_mv_v_c, 3, { TAG_MATVEC, TAG_VECTOR,
						    TAG_COMPLEX } },
  { "stos", TAG_MATVEC, evaluate::stos_mv_v_v, 3, { TAG_MATVEC, TAG_VECTOR,
						    TAG_VECTOR } },

  { "stoy", TAG_MATRIX, evaluate::stoy_m, 1, { TAG_MATRIX } },
  { "stoy", TAG_MATRIX, evaluate::stoy_m_d, 2, { TAG_MATRIX, TAG_DOUBLE } },
  { "stoy", TAG_MATRIX, evaluate::stoy_m_c, 2, { TAG_MATRIX, TAG_COMPLEX } },
  { "stoy", TAG_MATRIX, evaluate::stoy_m_v, 2, { TAG_MATRIX, TAG_VECTOR } },
  { "stoy", TAG_MATVEC, evaluate::stoy_mv, 1, { TAG_MATVEC } },
  { "stoy", TAG_MATVEC, evaluate::stoy_mv_d, 2, { TAG_MATVEC, TAG_DOUBLE } },
  { "stoy", TAG_MATVEC, evaluate::stoy_mv_c, 2, { TAG_MATVEC, TAG_COMPLEX } },
  { "stoy", TAG_MATVEC, evaluate::stoy_mv_v, 2, { TAG_MATVEC, TAG_VECTOR } },

  { "stoz", TAG_MATRIX, evaluate::stoz_m, 1, { TAG_MATRIX } },
  { "stoz", TAG_MATRIX, evaluate::stoz_m_d, 2, { TAG_MATRIX, TAG_DOUBLE } },
  { "stoz", TAG_MATRIX, evaluate::stoz_m_c, 2, { TAG_MATRIX, TAG_COMPLEX } },
  { "stoz", TAG_MATRIX, evaluate::stoz_m_v, 2, { TAG_MATRIX, TAG_VECTOR } },
  { "stoz", TAG_MATVEC, evaluate::stoz_mv, 1, { TAG_MATVEC } },
  { "stoz", TAG_MATVEC, evaluate::stoz_mv_d, 2, { TAG_MATVEC, TAG_DOUBLE } },
  { "stoz", TAG_MATVEC, evaluate::stoz_mv_c, 2, { TAG_MATVEC, TAG_COMPLEX } },
  { "stoz", TAG_MATVEC, evaluate::stoz_mv_v, 2, { TAG_MATVEC, TAG_VECTOR } },

  { "ytos", TAG_MATRIX, evaluate::ytos_m,  1, { TAG_MATRIX } },
  { "ytos", TAG_MATRIX, evaluate::ytos_m_d, 2, { TAG_MATRIX, TAG_DOUBLE } },
  { "ytos", TAG_MATRIX, evaluate::ytos_m_c, 2, { TAG_MATRIX, TAG_COMPLEX } },
  { "ytos", TAG_MATRIX, evaluate::ytos_m_v, 2, { TAG_MATRIX, TAG_VECTOR } },
  { "ytos", TAG_MATVEC, evaluate::ytos_mv, 1, { TAG_MATVEC } },
  { "ytos", TAG_MATVEC, evaluate::ytos_mv_d, 2, { TAG_MATVEC, TAG_DOUBLE } },
  { "ytos", TAG_MATVEC, evaluate::ytos_mv_c, 2, { TAG_MATVEC, TAG_COMPLEX } },
  { "ytos", TAG_MATVEC, evaluate::ytos_mv_v, 2, { TAG_MATVEC, TAG_VECTOR } },

  { "ztos", TAG_MATRIX, evaluate::ztos_m,  1, { TAG_MATRIX } },
  { "ztos", TAG_MATRIX, evaluate::ztos_m_d, 2, { TAG_MATRIX, TAG_DOUBLE } },
  { "ztos", TAG_MATRIX, evaluate::ztos_m_c, 2, { TAG_MATRIX, TAG_COMPLEX } },
  { "ztos", TAG_MATRIX, evaluate::ztos_m_v, 2, { TAG_MATRIX, TAG_VECTOR } },
  { "ztos", TAG_MATVEC, evaluate::ztos_mv, 1, { TAG_MATVEC } },
  { "ztos", TAG_MATVEC, evaluate::ztos_mv_d, 2, { TAG_MATVEC, TAG_DOUBLE } },
  { "ztos", TAG_MATVEC, evaluate::ztos_mv_c, 2, { TAG_MATVEC, TAG_COMPLEX } },
  { "ztos", TAG_MATVEC, evaluate::ztos_mv_v, 2, { TAG_MATVEC, TAG_VECTOR } },

  { "ytoz", TAG_MATRIX, evaluate::ytoz_m,  1, { TAG_MATRIX } },
  { "ytoz", TAG_MATVEC, evaluate::ytoz_mv, 1, { TAG_MATVEC } },
  { "ztoy", TAG_MATRIX, evaluate::ztoy_m,  1, { TAG_MATRIX } },
  { "ztoy", TAG_MATVEC, evaluate::ztoy_mv, 1, { TAG_MATVEC } },

  { "twoport", TAG_MATRIX, evaluate::twoport_m,  3,
    { TAG_MATRIX, TAG_CHAR, TAG_CHAR } },
  { "twoport", TAG_MATVEC, evaluate::twoport_mv, 3,
    { TAG_MATVEC, TAG_CHAR, TAG_CHAR } },

  { "inverse",   TAG_MATRIX,  evaluate::inverse_m,    1, { TAG_MATRIX } },
  { "inverse",   TAG_MATVEC,  evaluate::inverse_mv,   1, { TAG_MATVEC } },
  { "transpose", TAG_MATRIX,  evaluate::transpose_m,  1, { TAG_MATRIX } },
  { "transpose", TAG_MATVEC,  evaluate::transpose_mv, 1, { TAG_MATVEC } },
  { "det",       TAG_COMPLEX, evaluate::det_m,        1, { TAG_MATRIX } },
  { "det",       TAG_VECTOR,  evaluate::det_mv,       1, { TAG_MATVEC } },
  { "eye",       TAG_MATRIX,  evaluate::eye_m,        1, { TAG_DOUBLE } },
  { "adjoint",   TAG_MATRIX,  evaluate::adjoint_m,    1, { TAG_MATRIX } },
  { "adjoint",   TAG_MATVEC,  evaluate::adjoint_mv,   1, { TAG_MATVEC } },

  { "sign", TAG_DOUBLE,  evaluate::sign_d, 1, { TAG_DOUBLE  } },
  { "sign", TAG_COMPLEX, evaluate::sign_c, 1, { TAG_COMPLEX } },
  { "sign", TAG_VECTOR,  evaluate::sign_v, 1, { TAG_VECTOR  } },

  { "sinc", TAG_DOUBLE,  evaluate::sinc_d, 1, { TAG_DOUBLE  } },
  { "sinc", TAG_COMPLEX, evaluate::sinc_c, 1, { TAG_COMPLEX } },
  { "sinc", TAG_VECTOR,  evaluate::sinc_v, 1, { TAG_VECTOR  } },

  { "Rollet", TAG_DOUBLE,  evaluate::rollet_m,  1, { TAG_MATRIX } },
  { "Rollet", TAG_VECTOR,  evaluate::rollet_mv, 1, { TAG_MATVEC } },
  { "Mu",     TAG_DOUBLE,  evaluate::mu1_m,     1, { TAG_MATRIX } },
  { "Mu",     TAG_VECTOR,  evaluate::mu1_mv,    1, { TAG_MATVEC } },
  { "Mu2",    TAG_DOUBLE,  evaluate::mu2_m,     1, { TAG_MATRIX } },
  { "Mu2",    TAG_VECTOR,  evaluate::mu2_mv,    1, { TAG_MATVEC } },

  { "linspace", TAG_VECTOR, evaluate::linspace, 3,
    { TAG_DOUBLE, TAG_DOUBLE, TAG_DOUBLE } },
  { "logspace", TAG_VECTOR, evaluate::logspace, 3,
    { TAG_DOUBLE, TAG_DOUBLE, TAG_DOUBLE } },
  { "NoiseCircle", TAG_VECTOR, evaluate::noise_circle_d_v, 5,
    { TAG_VECTOR, TAG_VECTOR, TAG_VECTOR, TAG_DOUBLE, TAG_VECTOR } },
  { "NoiseCircle", TAG_VECTOR, evaluate::noise_circle_d_d, 5,
    { TAG_VECTOR, TAG_VECTOR, TAG_VECTOR, TAG_DOUBLE, TAG_DOUBLE } },
  { "NoiseCircle", TAG_VECTOR, evaluate::noise_circle_d, 4,
    { TAG_VECTOR, TAG_VECTOR, TAG_VECTOR, TAG_DOUBLE } },
  { "NoiseCircle", TAG_VECTOR, evaluate::noise_circle_v_v, 5,
    { TAG_VECTOR, TAG_VECTOR, TAG_VECTOR, TAG_VECTOR, TAG_VECTOR } },
  { "NoiseCircle", TAG_VECTOR, evaluate::noise_circle_v_d, 5,
    { TAG_VECTOR, TAG_VECTOR, TAG_VECTOR, TAG_VECTOR, TAG_DOUBLE } },
  { "NoiseCircle", TAG_VECTOR, evaluate::noise_circle_v, 4,
    { TAG_VECTOR, TAG_VECTOR, TAG_VECTOR, TAG_VECTOR } },
  { "StabCircleL", TAG_VECTOR, evaluate::stab_circle_l_v, 2,
    { TAG_MATVEC, TAG_VECTOR } },
  { "StabCircleL", TAG_VECTOR, evaluate::stab_circle_l_d, 2,
    { TAG_MATVEC, TAG_DOUBLE } },
  { "StabCircleL", TAG_VECTOR, evaluate::stab_circle_l, 1, { TAG_MATVEC } },
  { "StabCircleS", TAG_VECTOR, evaluate::stab_circle_s_v, 2,
    { TAG_MATVEC, TAG_VECTOR } },
  { "StabCircleS", TAG_VECTOR, evaluate::stab_circle_s_d, 2,
    { TAG_MATVEC, TAG_DOUBLE } },
  { "StabCircleS", TAG_VECTOR, evaluate::stab_circle_s, 1, { TAG_MATVEC } },
  { "GaCircle", TAG_VECTOR, evaluate::ga_circle_d_v, 3,
    { TAG_MATVEC, TAG_DOUBLE, TAG_VECTOR } },
  { "GaCircle", TAG_VECTOR, evaluate::ga_circle_d_d, 3,
    { TAG_MATVEC, TAG_DOUBLE, TAG_DOUBLE } },
  { "GaCircle", TAG_VECTOR, evaluate::ga_circle_d, 2,
    { TAG_MATVEC, TAG_DOUBLE } },
  { "GaCircle", TAG_VECTOR, evaluate::ga_circle_v_v, 3,
    { TAG_MATVEC, TAG_VECTOR, TAG_VECTOR } },
  { "GaCircle", TAG_VECTOR, evaluate::ga_circle_v_d, 3,
    { TAG_MATVEC, TAG_VECTOR, TAG_DOUBLE } },
  { "GaCircle", TAG_VECTOR, evaluate::ga_circle_v, 2,
    { TAG_MATVEC, TAG_VECTOR } },
  { "GpCircle", TAG_VECTOR, evaluate::gp_circle_d_v, 3,
    { TAG_MATVEC, TAG_DOUBLE, TAG_VECTOR } },
  { "GpCircle", TAG_VECTOR, evaluate::gp_circle_d_d, 3,
    { TAG_MATVEC, TAG_DOUBLE, TAG_DOUBLE } },
  { "GpCircle", TAG_VECTOR, evaluate::gp_circle_d, 2,
    { TAG_MATVEC, TAG_DOUBLE } },
  { "GpCircle", TAG_VECTOR, evaluate::gp_circle_v_v, 3,
    { TAG_MATVEC, TAG_VECTOR, TAG_VECTOR } },
  { "GpCircle", TAG_VECTOR, evaluate::gp_circle_v_d, 3,
    { TAG_MATVEC, TAG_VECTOR, TAG_DOUBLE } },
  { "GpCircle", TAG_VECTOR, evaluate::gp_circle_v, 2,
    { TAG_MATVEC, TAG_VECTOR } },
  { "PlotVs", TAG_VECTOR, evaluate::plot_vs_v, 2,
    { TAG_VECTOR, TAG_VECTOR } },
  { "PlotVs", TAG_MATVEC, evaluate::plot_vs_mv, 2,
    { TAG_MATVEC, TAG_VECTOR } },

  { "interpolate", TAG_VECTOR, evaluate::interpolate_v_v_d, 3,
    { TAG_VECTOR, TAG_VECTOR, TAG_DOUBLE } },
  { "interpolate", TAG_VECTOR, evaluate::interpolate_v_v, 2,
    { TAG_VECTOR, TAG_VECTOR } },

  { "fft", TAG_VECTOR, evaluate::fft_v_v, 2,
    { TAG_VECTOR, TAG_VECTOR } },
  { "ifft", TAG_VECTOR, evaluate::ifft_v_v, 2,
    { TAG_VECTOR, TAG_VECTOR } },
  { "dft", TAG_VECTOR, evaluate::dft_v_v, 2,
    { TAG_VECTOR, TAG_VECTOR } },
  { "idft", TAG_VECTOR, evaluate::idft_v_v, 2,
    { TAG_VECTOR, TAG_VECTOR } },

  { NULL, 0, NULL, 0, { 0 } /* end of list */ }
};

// Converts a TAG_XXX value into a unique string.
char * checker::tag2key (int tag) {
  char * key = "";
  switch (tag & ~TAG_RANGE) {
  case TAG_UNKNOWN:
    key = "U"; break;
  case TAG_DOUBLE:
    key = "D"; break;
  case TAG_COMPLEX:
    key = "C"; break;
  case TAG_VECTOR:
    key = "V"; break;
  case TAG_MATRIX:
    key = "M"; break;
  case TAG_MATVEC:
    key = "MV"; break;
  case TAG_CHAR:
    key = "CHR"; break;
  case TAG_STRING:
    key = "STR"; break;
  }
  return key;
}

#endif /* __APPLICATIONS_H__ */