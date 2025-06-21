// Wavering Synths
//
// I wanted to build a synth wave track but didn't find good instruments 
// (neither in their individual sounds nor as a whole)

setcpm(90/4)
$: note("<f2 g#2 c3 a#2>*2".add("-12")).ply(8).sound("gm_synth_bass_2").lpf(400).gain(1.5)
  .attack(0.1).decay(0.15).sustain(.65).release(0.0).distort(3)
$: note("<[f1,g#1,c2] [g#1,c2,d#1] [c2,d#1,g2] [a#1,c2,f2]>*2".add("24"))
  .sound("gm_pad_sweep").room(3).adsr("0.1:0.3:0.5:0.2")
$: note("<[f1 g#1 c2]*2 [g#1 c2 d#1]*2 [c2 d#1 g2]*2 [a#1 c2 f2]*2>*2".add("24"))
  .sound("gm_electric_guitar_clean").room(3).adsr("0.1:0.3:0.5:0.2")
$: sound("bd*4, hh*16").bank("RolandTR808").gain(2)
