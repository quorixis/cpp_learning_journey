

// Temperature
double celsiusToFahrenheit(double celsius)
{

    double fahrenheit{(celsius * 9.0 / 5) + 32};

    return fahrenheit;
}

double fahrenheitToCelsius(double fahrenheit)
{

    double celsius{(fahrenheit - 32) * 5.0 / 9};

    return celsius;
}

double celsiusToKelvin(double celsius)
{

    double kelvin{celsius + 273.15};

    return kelvin;
}

double kelvinToCelsius(double kelvin)
{

    double celsius{kelvin - 273.15};

    return celsius;
}

double fahrenheitToKelvin(double fahrenheit)
{

    double kelvin{((fahrenheit - 32) * 5.0 / 9) + 273.15};

    return kelvin;
}

double kelvinToFahrenheit(double kelvin)
{

    double fahrenheit{(kelvin - 273.15) * 9.0 / 5 + 32};

    return fahrenheit;
}

// Distance & Length

double kilometersToMiles(double kilometers)
{

    double miles{kilometers * 5.0 / 8};

    return miles;
}

double milesToKilometers(double miles)
{

    double kilometers{miles * 8.0 / 5};

    return kilometers;
}

double metersToFeet(double meters)
{

    double feet{meters * 3.28};

    return feet;
}

double feetToMeters(double feet)
{

    double meters{feet / 3.28};

    return meters;
}

double centimetersToInches(double centimeters)
{

    double inches{centimeters / 2.54};

    return inches;
}

double inchesToCentimeters(double inches)
{

    double centimeters{inches * 2.54};

    return centimeters;
}

// mass & weight

double kilogramsToPounds(double kilograms)
{
    double pounds{kilograms * 2.20462};
    return pounds;
}

double poundsToKilograms(double pounds)
{
    double kilograms{pounds / 2.20462};
    return kilograms;
}

double gramsToOunces(double grams)
{
    double ounces{grams / 28.35};
    return ounces;
}

double ouncesToGrams(double ounces)
{
    double grams{ounces * 28.35};
    return grams;
}

// volume

double litersToGallons(double liters)
{
    double gallons{liters / 3.785};
    return gallons;
}

double gallonsToLiters(double gallons)
{
    double liters{gallons * 3.785};
    return liters;
}
