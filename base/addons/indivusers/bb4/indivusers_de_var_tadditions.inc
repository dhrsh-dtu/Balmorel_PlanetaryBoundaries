*INDIVUSERS add-on. Implemented by Juan Gea Bermudez 2019

$onmulti
$if     EXIST '../data/Weather_Year/%WEATHER_YEAR%/DE_VAR_T_RESE.inc' $INCLUDE         '../data/Weather_Year/%WEATHER_YEAR%/DE_VAR_T_RESE.inc';
$if     EXIST '../data/Weather_Year/%WEATHER_YEAR%/DE_VAR_T_OTHER.inc' $INCLUDE         '../data/Weather_Year/%WEATHER_YEAR%/DE_VAR_T_OTHER.inc';
$if not EXIST '../data/Weather_Year/%WEATHER_YEAR%/DE_VAR_T_RESE.inc' $INCLUDE '../../base/data/INDIVUSERS_DE_VAR_T.inc';
$offmulti
