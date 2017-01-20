/*ckwg +5
 * Copyright 2010-2013 by Kitware, Inc. All Rights Reserved. Please refer to
 * KITWARE_LICENSE.TXT for licensing information, or contact General Counsel,
 * Kitware, Inc., 28 Corporate Drive, Clifton Park, NY 12065.
 */

#ifdef USE_BRL

#include <vxl_config.h>

#include <object_detectors/gmm_background_model_process.txx>

template class vidtk::gmm_background_model_process<vxl_byte>;
template class vidtk::gmm_background_model_process<vxl_uint_16>;

#endif