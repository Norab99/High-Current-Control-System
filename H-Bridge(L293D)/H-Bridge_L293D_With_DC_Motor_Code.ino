# define MP1 11   // The pin that attached to the gate of the pnp mosfet 1.
# define MP2 10  // The pin that attached to the gate of the pnp mosfet 2.

# define MN1 4  // The pin that attached to the gate of the npn mosfet 1.
# define MN2 3  // The pin that attached to the gate of the npn mosfet 2.

void setup()
{
 
}

void loop()
{
  
  digitalWrite(MP1, 0);
  digitalWrite(MP2, 1);
  digitalWrite(MN1, 1);
  digitalWrite(MN2, 0);
  delay(3000);
  digitalWrite(MP1, 1);
  digitalWrite(MP2, 0);
  digitalWrite(MN1, 0);
  digitalWrite(MN2, 1);
  delay(3000);

}
