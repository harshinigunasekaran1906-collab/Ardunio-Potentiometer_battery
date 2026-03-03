#define POT_PIN A1    // Analog pin connected to pot

void setup(void)
{
    Serial.begin(9600);   
}

void loop(void)
{
    int pot_adc;         
    float pot_voltage;    // Converted voltage

    pot_adc = analogRead(POT_PIN);        // Read ADC
    pot_voltage = (pot_adc * 5.0) / 1023.0; 

    Serial.print("Pot ADC: ");
    Serial.print(pot_adc);
    Serial.print(" | Pot Voltage: ");
    Serial.print(pot_voltage, 2);
    Serial.println(" V");

    delay(300);   
}