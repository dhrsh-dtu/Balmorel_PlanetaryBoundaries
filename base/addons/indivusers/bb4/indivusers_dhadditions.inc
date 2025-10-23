*INDIVUSERS add-on. Implemented by Juan Gea Bermudez 2019

$onmulti
$if     EXIST '../data/INDIVUSERS_DH.inc' $INCLUDE         '../data/INDIVUSERS_DH.inc';
$if not EXIST '../data/INDIVUSERS_DH.inc' $INCLUDE '../../base/data/INDIVUSERS_DH.inc';

$if     EXIST '../data/Weather_Year/%WEATHER_YEAR%/DH_RESIDENTIAL.inc' $INCLUDE         '../data/Weather_Year/%WEATHER_YEAR%/DH_RESIDENTIAL.inc';
$if     EXIST '../data/Weather_Year/%WEATHER_YEAR%/DH_TERTIARY.inc' $INCLUDE         '../data/Weather_Year/%WEATHER_YEAR%/DH_TERTIARY.inc';

$offmulti