// Por Roberto A. Zavala
// https://github.com/QuiahEditorial
// Libro : https://www.amazon.com.mx/dp/B074TTGLL2
// 🙏🏼    : DNv7acPAeVBhTXbKv26itJecPG1SPy2o4F     tip with Dogecoin

// Sea la función coseno aproximada por serie ed taylor
// Cos(x) = 1 - (x^2 / 2!) + (x^4 / 4!) - (x^6 / 6!) + (x^8 / 8!)...
// se construye un vector Csn[N+1] de entradas igual a Cos(x)

float pi = 3.14159265; // pi
int    j = 0;          // contador

const int N = 100;     // número de muestras
float Cos [N+1];       // vector
float d = pi/2;        // dominio \frac{\pi}{2}
float i;               // incremento
float x;               // x

void setup()
{
Serial.begin(2000000);
i = d / N;
Serial.println(i,5);
}

void loop()
{
for (x=0; x<=d+i; x+=i)
    {
    Serial.print(j);  Serial.print("\t");
    Serial.print(x,4);  Serial.print("\t");
    Cos[j] = 1-(pow(x,2)/2)+(0.0416666*pow(x,4))-(0.00138888*pow(x,6))+0.0000248*(pow(x,8)); 
    Serial.println(Cos[j],4);
    j++;
    }
Serial.println(micros());
delay(1);
exit(0);
}
