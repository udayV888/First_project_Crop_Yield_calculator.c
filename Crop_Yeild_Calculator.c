#include <stdio.h>

float
calculateCropYield (float fieldArea, float plantSpacing, float yieldPerPlant)
{
  float totalplants = fieldArea / (plantSpacing * plantSpacing);
  float cropyield = totalplants * yieldPerPlant;
  return cropyield;
}

int
main ()
{

  float fieldArea, plantSpacing, yieldPerPlant;

  printf ("Crop Yield Calculator\n");
  printf ("Enter the field area in square meters: ");
  if (scanf ("%f", &fieldArea) != 1 || fieldArea <= 0)
    {
      printf ("Invalid input for field area.Please enter a valid number.\n");
      return 1;
    }
  printf ("Enter the plant spacing in meters: ");
  if (scanf ("%f", &plantSpacing) != 1 || plantSpacing <= 0)
    {
      printf ("Invalid input for plant spacing.Please enter valid value.\n");
      return 1;
    }
  printf ("Enter th average yield per plant in kg: ");
  if (scanf ("%f", &yieldPerPlant) != 1 || yieldPerPlant <= 0)
    {
      printf
	("Invalid input for yield per plant.Please enter valid value.\n");
      return 1;
    }
  float cropYield =
    calculateCropYield (fieldArea, plantSpacing, yieldPerPlant);

  printf ("Crop Yeild Calculator:\n");
  printf ("Field Area: %.2f square meters\n", fieldArea);
  printf ("Plant Spacing: %.2f meters mts\n", plantSpacing);
  printf ("Yield Per Plant: %.2f Kilograms mts\n", yieldPerPlant);
  printf ("Estimation Crop Yield: %.2f Kilograms\n", cropYield);
  return 0;
}
