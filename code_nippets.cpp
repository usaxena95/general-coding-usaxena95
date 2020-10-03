//MULTIPLICATION OF TWO BIG INTEGERS MODULO M
lld pow(lld b, lld e, lld m)
{
   uint64 r = 1;
   for(; e; e >>= 1)
   {
      if(e & 1) r = mul(r, b, m);
      b = mul(b, b, m);
   }
   return r;
}


//MILLER RABIN DETERMINISTIC PRIMALTY
bool MillerRabin(lld n, lld k)
{
   // Factor n-1 as d*2^s
   lld s = 0;
   lld d = n - 1;
   for(; !(d & 1); s++)
      d >>= 1;
 
   // Verify x = k^(d 2^i) mod n != 1
   lld x = pow(k % n, d, n);
   if(x == 1 || x == n-1) return true;
   while(s-- > 1)
   {
      // x = x^2 mod n
      x = mul(x, x, n);
      if(x == 1) return false;
      if(x == n-1) return true;
   }
   return false;
	// TEST THIS FUNCTION FOR K={2, 325, 9375, 28178, 450775, 9780504, 1795265022}
   if (n < 4759123141) ar = new ulong[] { 2, 7, 61 };
   else if (n < 341550071728321) ar = new ulong[] { 2, 3, 5, 7, 11, 13, 17 };

}
