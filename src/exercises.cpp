#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
      string count_short_char;
  if (s1 < s2 && s1 < s3) {
    count_short_char = s1;
    cout << count_short_char;
  }
  else if (s2 < s1 && s2 < s3){
    count_short_char = s2;
    cout << count_short_char;
    }
  else if (s3 < s1 && s3 < s2) {
    count_short_char = s3;
    cout << count_short_char;
  }
  else {
    cout << s1 ;
  }
}
  

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
     double calcular_raiz = B * B - 4 * A * C;
    if (A == 0 && B > 0) {
       double calcular_ByC = -C / B;
        cout << calcular_ByC << endl;
        
    }else if (A== 0 && B == 0){
        cout <<"";
    }
    else if ( calcular_raiz > 0 ) {
        double c_pos_fraccion = (-B + sqrt(calcular_raiz)) / (2 * A);
        double c_neg_fraccion = (-B - sqrt(calcular_raiz)) / (2 * A);
        cout << c_pos_fraccion << " " << c_neg_fraccion << endl;
    } else if (calcular_raiz == 0 ) {
        double calcular_raiz_cero = -B / (2 * A);
        cout << calcular_raiz_cero << endl;
    }  else if (calcular_raiz < 0 ) {
        cout << "";
    }
    else;

}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
    if (a > 0 && b > 0) {
        int result = a / b;
        cout << result << endl;
    }
    else if ( b == 0 ) {
        cout << "Impossible" << endl;
    }
    else;
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
    double descuento;
    double costo_total;
    double costo_sin_descuento_a;
    double descuento_especial_ab;

    if (n > a && n < b) {
        descuento = n * x / 100;
        costo_total = n - descuento;
        cout << costo_total << endl;
    }
    else if (n > b && n > a) {
        descuento = n * y / 100;
        costo_total = n - descuento;
    cout << costo_total << endl;
    }
    else if (n < a && n < b) {
        cout << n << endl;
    }
    else;
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  int int_char = int (character);
    if (int_char >= 97 && int_char <= 122 ){
        cout << "lower-case alphabet" << endl;
    }
    else if (int_char >= 65 && int_char <= 90 ){
        cout << "upper-case alphabet" << endl;
    }
     else if (int_char >= 0 && int_char <= 65 ){
        cout << "not an alphabet" << endl;
    }else;
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
   if (0 <= number && number <=7) {

    switch(number) {
        case 0:
            cout << "Invalid input" << endl;
            break;
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl ;
            break;
        case 6:
            cout << "Saturday" <<endl;
            break;
        case 7:
            cout << "Sunday" <<endl;
            break;
    }
 } else {
     cout << "Invalid input" << endl;
 }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  double pi = 3.14;
double result;
    if(r > 0 ) {
    result = 4 * pi * r * r;
    cout << result << endl;
    }else if (r == 0){
    cout << r << endl;
    } else{
    cout << "Error: Radius cannot be negative." << endl;
    }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
  long int hour;
  long int x_hour;
  long int minutes;
  long int new_seconds;
  
  if (seconds >= 0) {
    hour = seconds / 3600;
    x_hour = seconds % 3600;
    minutes = x_hour / 60;
    new_seconds = x_hour % 60; 
    cout << ((hour < 10) ? "0" : "") << hour << ":" << ((minutes < 10) ? "0" : "") << minutes << ":" << ((new_seconds < 10) ? "0" : "") << new_seconds << endl;
  } else {
    cout << "Error: Input seconds cannot be negative." << endl; 
    }
    
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
   if (s1[0] == s5[0]) {
    cout << s1[0] << s2[0] << s3[0] << s4[0] << s5[0] << endl;
    return "Hemos encontrado algo!";
    } else {
      cout << s1[0] << s2[0] << s3[0] << s4[0] << s5[0] << endl;
      return "Aun sin suerte";
    }
  return ""; 
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
   
    int suma = a + b;
    int digitos = 0;
    int count_digitos = suma;
    while (count_digitos != 0) {
        digitos++;
        count_digitos /= 10;
    }
    return digitos * suma;
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
 if (number != 11235813) {
    return "Esto no es de Fibonacci";
  } 
  else {
    return "Se encontro a Fibonacci";
  }
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
    bool match1 = (color1 == color4 || color4 == "?") && (numb1 == numb4 || numb4 == -1);
  bool match2 = (color2 == color4 || color4 == "?") && (numb2 == numb4 || numb4 == -1);
  bool match3 = (color3 == color4 || color4 == "?") && (numb3 == numb4 || numb4 == -1);

  if (match1) cout << "1" << endl;
  if (match2) cout << "2" << endl;
  if (match3) cout << "3" << endl;
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  if (age < 18) {
        return "Not eligible";
    } else if (years_of_experience >= 5) {
        return "Senior project manager";
    } else if (years_of_experience >= 3) {
        return "Project manager";
    } else {
        return "Project coordinator";
    }
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  if( number_of_docs <= 0){
    return "No se encontraron documentos";
  } else if( number_of_docs == 1){
    return "Se encontro un documento";
  } else {
    string text = " documentos encontrados";
    return to_string(number_of_docs) + text;
  }
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
  cout << "Los valores son: a = " + to_string(a) + " b = " + to_string(b) + " y c = " + to_string(c) << endl;
  cout << "Permutamos: a => b, b => c, c => a" << endl;
  int temp_a = a;
   int temp_b = b;
  a = c;
  b = temp_a;
  c = temp_b;
  cout << "Los valores despues de la permutacion son: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) << endl;

}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
  if ((debut < 0 || debut > 24) || (fin < 0 || fin > 24)) {
        cout << "Las horas deben estar entre 0 y 24!" << endl;
        return;
    } else if (debut == fin) {
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
        return;
    } else if (debut > fin) {
        cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
        return;
    }
    int total = 0;
    int costo_bajo = 1;
    int costo_alto = 2;
    int horas_bajo = 0;
    int horas_alto = 0;
    for (int hora = debut; hora < fin; ++hora) {
    if ((hora >= 0 && hora < 7) || (hora >= 17 && hora < 24)) {
      total += costo_bajo;
      ++horas_bajo;
    } else {
      total += costo_alto;
      ++horas_alto;
      }
    }
    cout << "Haz alquilado una bicicleta por" << endl;
    if (horas_bajo > 0) {
        cout << horas_bajo << " hora(s) con el tarifario de " << costo_bajo << " boliviano(s)" << endl;
    }
    if (horas_alto > 0) {
    cout << horas_alto << " hora(s) con el tarifario de " << costo_alto << " boliviano(s)" << endl;
    }
    cout << "El monto total a pagar es de " << total << " boliviano(s)." << endl;
    
    
}

