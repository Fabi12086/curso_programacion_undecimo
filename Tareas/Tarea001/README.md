***Tarea 001***

*Nombre propietario: Fabiola Piedra*

**Primer programa: hello_world**

*<div style="border: 1px solid gold; padding: 10px;">Para este use la siguiente línea, ya que esta le indica al programa que vamos a usar esta librería</div>*

> #include < iostream >  

*<div style="border: 1px solid gold; padding: 10px;">Luego tenemos la siguiente línea, que es la función principal de nuestro programa, ya que de aquí se empieza a ejecutar nuestro código</div>*

> int main() { ...

*<div style="border: 1px solid gold; padding: 10px;">Luego se procede a usar la siguiente línea la cual nos permite enviar mensajes a la pantalla y así interaccionar con el usuario</div>*

> std::cout << "Hello World" <<

*<div style="border: 1px solid gold; padding: 10px;">Esta línea permite que haya un salto de línea para que el siguiente mensaje se muestre debajo</div>*

> std::endl;

*<div style="border: 1px solid gold; padding: 10px;">Luego los "<<" se usan para insertar mensajes que queremos mostrar</div>*

**Segundo programa: numeros**

*<div style="border: 1px solid blue; padding: 10px;">Aquí igualmente incluimos la librería "iostream", como el "int main()", ya que son la base para que se ejecute el programa, luego usamos la siguiente línea nueva, que lee el número que el usuario introdujo y lo guarda en la variable num1, este paso se repite para con el num2 </div>*

> std::cin >> num1;

*<div style="border: 1px solid blue; padding: 10px;">Nuevamente usamos el std::cout para interaccionar con el usuario, en este caso pedirle el los números</div>*

> std::cout <<"Introduce un primer numero: ";

*<div style="border: 1px solid blue; padding: 10px;">Luego usamos el int para realizar las diferentes operaciones, en este caso sería la suma y la multiplicación. </div>*

> int suma = num1 + num2;

> int multiplicacion = num1 * num2;