#include <iostream>
#include <string>
using namespace std;

// Algoritmo de Quien es Quien con IF anidado - Carlos Alvarado Lima

int main(){

    std::string respuesta;

    std::cout << "Su personaje es hombre?";
    std::cin >> respuesta;

    if (respuesta == "si"){

        std::cout << "Su personaje usa lentes? ";
        std::cin >> respuesta;
        std::cout << std::endl;
            if (respuesta == "si"){
                std::cout << "Su personaje tiene cabellera completa?";
                std::cin >> respuesta;
                std::cout << std::endl;
                    if (respuesta == "si"){
                        std::cout << "Su cabello es de color blanco? ";
                        std::cin >> respuesta;
                        std::cout << std::endl;
                            if (respuesta == "si"){
                                std::cout << "Su personaje es: Paul";
                            } else {
                                std::cout << "Su personaje es: Joe";
                            }
                    } else {
                        std::cout << "Tiene cabello blanco? ";
                        std::cin >> respuesta;
                        std::cout << std::endl;
                            if (respuesta == "si"){
                            std::cout << "Su personaje es: Sam";
                            } else {
                            std::cout << "Su personaje es: Tom";
                            }
                    }
            } else {
                std::cout << "Su personaje usa gorro? ";
                std::cin >> respuesta;
                std::cout << std::endl;
                    if (respuesta == "si"){
                        std::cout << "El gorro es de color gris? ";
                        std::cin >> respuesta;
                        std::cout << std::endl;
                            if (respuesta == "si"){
                                std::cout << "Tiene franjas? ";
                                std::cin >> respuesta;
                                std::cout << std::endl;
                                    if (respuesta == "si"){
                                        std::cout << "Su personaje es George";
                                    } else {
                                        std::cout << "Su personaje es Bernard";
                                    }
                            } else {
                                std::cout << "Su personaje es Eric";
                            }
                    } else {
                        std::cout << "Su personaje tiene bigote? ";
                        std::cin >> respuesta;
                        std::cout << std::endl;
                            if (respuesta == "si"){
                                std::cout << "Es grueso? ";
                                std::cin >> respuesta;
                                std::cout << std::endl;
                                    if (respuesta == "si"){
                                        std::cout << "Tiene cabellera? ";
                                        std::cin >> respuesta;
                                        std::cout << std::endl;
                                            if (respuesta == "si"){
                                                std::cout << "Es larga? ";
                                                std::cin >> respuesta;
                                                std::cout << std::endl;
                                                    if (respuesta == "si"){
                                                        std::cout << "Su personaje es: Alfred";
                                                    } else {
                                                        std::cout << "Es rubio? ";
                                                        std::cin >> respuesta;
                                                        std::cout << std::endl;
                                                            if (respuesta == "si"){
                                                                std::cout << "Su personaje es: Charles";
                                                            } else {
                                                                std::cout << "Su personaje es: Max";
                                                            }
                                                    }
                                            } else {
                                                std::cout << "Su personaje es: Richard";
                                            }
                                    } else {
                                        std::cout << "Su personaje es Alex";
                                    }
                            } else {
                                std::cout << "Tiene barba? ";
                                std::cin >> respuesta;
                                std::cout << std::endl;
                                    if (respuesta == "si"){
                                        std::cout << "Es rubia? ";
                                        std::cin >> respuesta;
                                        std::cout << std::endl;
                                            if (respuesta == "si"){
                                                std::cout << "Su personaje es David";
                                            } else {
                                                std::cout << "Es pelirroja? ";
                                                std::cin >> respuesta;
                                                std::cout << std::endl;
                                                    if (respuesta == "si"){
                                                        std::cout << "Su personaje es Bill";
                                                    } else {
                                                        std::cout << "Su personaje es Philip";
                                                    }
                                            }
                                    } else {
                                        std::cout << "Tiene cabellera completa? ";
                                        std::cin >> respuesta;
                                        std::cout << std::endl;
                                            if (respuesta == "si"){
                                                std::cout << "Es pelirrojo? ";
                                                std::cin >> respuesta;
                                                std::cout << std::endl;
                                                    if (respuesta == "si"){
                                                        std::cout << "Su personaje es Frans";
                                                    } else {
                                                        std::cout << "Es castano? ";
                                                        std::cin >> respuesta;
                                                        std::cout << std::endl;
                                                            if (respuesta == "si"){
                                                                std::cout << "Su personaje es Robert";
                                                            } else {
                                                                std::cout << "Su personaje es Peter";
                                                            }
                                                    }
                                            } else {
                                                std::cout << "Su personaje es Herman";
                                            }   
                                    }
                            }
                    }
            }

    } else {
        std::cout << "Su personaje usa gorro? ";
        std::cin >> respuesta;
        std::cout << std::endl;
            if (respuesta == "si"){
                std::cout << "Su personaje usa lentes? ";
                std::cin >> respuesta; 
                std::cout << std::endl;
                    if (respuesta == "si"){
                        std::cout << "Su personaje es Claire";
                    } else {
                        std::cout << "Su personaje es Maria";
                    }
            } else {
                std::cout << "Su personaje tiene cabello de color blanco? " << std::endl;
                std::cin >> respuesta; 
                std::cout << std::endl;
                    if (respuesta == "si"){
                        std::cout << "Su personaje es Susan";
                    } else {
                        std::cout << "Su personaje tiene cabello de color negro? ";
                        std::cin >> respuesta;
                        std::cout << std::endl;
                            if (respuesta == "si"){
                                std::cout << "Su personaje es Anne";
                            } else {
                                std::cout << "Su personaje es Anita";
                            }
                    }
            }
    }

    return 0;


}