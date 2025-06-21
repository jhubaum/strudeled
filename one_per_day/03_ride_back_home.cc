// Ride back home
// Wrote this piece on my ride back home from Berlin
// Took a drum beat from the tutorial section and added a base, rhythm and melody

setcpm(120/2)
$: sound("bd sd, - - - hh - hh - -, - perc - perc:1*2").bank("RolandCompurhythm1000")
$: n("<0 0*2 3 - >*4")
  .scale("<C:major D:mixolydian>/4")
  .sound("gm_electric_guitar_clean")
  .delay(1.5).room(1.5)
$: n("0@3 0").sound("gm_fretless_bass")
  .scale("<C:major D:mixolydian>/4").gain("0.5")
$: n("<[[2 3] <4!2 1!2>] ->").scale("C:major").sound("gm_epiano2:3").gain("1.7")
