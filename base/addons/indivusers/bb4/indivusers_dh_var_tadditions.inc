*INDIVUSERS add-on. Implemented by Juan Gea Bermudez 2019

$onmulti
$if     EXIST '../data/INDIVUSERS_DH_VAR_T.inc' $INCLUDE         '../data/INDIVUSERS_DH_VAR_T.inc';
$if not EXIST '../data/INDIVUSERS_DH_VAR_T.inc' $INCLUDE '../../base/data/INDIVUSERS_DH_VAR_T.inc';
$offmulti
$onmulti
$if     EXIST '../data/Weather_Year/%WEATHER_YEAR%/DH_VAR_T_RESH.inc' $INCLUDE         '../data/Weather_Year/%WEATHER_YEAR%/DH_VAR_T_RESH.inc';
$if     EXIST '../data/Weather_Year/%WEATHER_YEAR%/DH_VAR_T_RESIDENTIAL.inc' $INCLUDE         '../data/Weather_Year/%WEATHER_YEAR%/DH_VAR_T_RESIDENTIAL.inc';
$if     EXIST '../data/Weather_Year/%WEATHER_YEAR%/DH_VAR_T_TERTIARY.inc' $INCLUDE         '../data/Weather_Year/%WEATHER_YEAR%/DH_VAR_T_TERTIARY.inc';
$offmulti
