bool compareFloats(float f1, float f2) {
   if(f1 > (f2-0.0001) && f1 < (f2+0.0001)) {
      return true ;
   }
   return false ;
}
