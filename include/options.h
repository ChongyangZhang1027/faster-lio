//
// Created by xiang on 2021/10/8.
//

#ifndef FAST_LIO_OPTIONS_H
#define FAST_LIO_OPTIONS_H

namespace faster_lio::options {

/// fixed params
constexpr double INIT_TIME = 0.1;
constexpr double LASER_POINT_COV = 0.001;
constexpr int PUBFRAME_PERIOD = 20;
constexpr int NUM_MATCH_POINTS = 5;      // required matched points in current
constexpr int MIN_NUM_MATCH_POINTS = 3;  // minimum matched points in current
constexpr double PROXIMITY_PNT_DIS    = 3;   // threshold to judge if the points are too close to the sensor
constexpr double PROXIMITY_PNT_RATIO  = 0.5; // threshold to judge if the percertage of proximity points is too high
constexpr double EIGEN_VAL_HTH_THRESH = 60;  // threshold to judge if the HTH matrix is ill
constexpr double EIGEN_VAL_M_THRESH = 350;    // threshold to judge if the M matrix is ill
constexpr int DEGENERATION_CHECK_SW = 10;    // sliding window length of degeneration check

/// configurable params
extern int NUM_MAX_ITERATIONS;      // max iterations of ekf
extern float ESTI_PLANE_THRESHOLD;  // plane threshold
extern bool FLAG_EXIT;              // flag for exitting

}  // namespace faster_lio::options

#endif  // FAST_LIO_OPTIONS_H
