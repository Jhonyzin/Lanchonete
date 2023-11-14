extern char con[1] = "";

extern int i=0, sim=0;

extern float valores[12]={2,3.5,3.5,5.5,5.5,5.5,4.5,6.9,5.5,6.5,18.9,22};

extern char carda[12][300]={"Agua", "Suco de uva", "Suco de laranja", "Coca-Cola", "Pepsi", "Guarana", "Fanta", "Empada", "Coxinha", "Salada de Frutas", "Hamburguer", "Pizza"};



//      CORES DAS LETRAS: (1 a 15)
enum{
    BLACK,
    BLUE,
    GREEN,
    CYAN,
    RED,
    MEGENTA, 
    BROWN,
    LIGHTGRAY,
    DARKGRAY,
    LIGHTBLUE,
    LIGHTGREEN,
    LIGHTCYAN,
    LIGHTRED,
    LIGHTMAGENTA,
    YELLOW, 
    WHITE
};

//      CORES DE FUNDO:
enum{
    _BLACK = 0,
    _BLUE = 16,
    _GREEN = 32,
    _CYAN = 48,
    _RED = 64,
    _MEGENTA = 80, 
    _BROWN = 96,
    _LIGHTGRAY = 112,
    _DARKGRAY = 128,
    _LIGHTBLUE = 144,
    _LIGHTGREEN = 160,
    _LIGHTCYAN = 176,
    _LIGHTRED = 192,
    _LIGHTMAGENTA = 208,
    _YELLOW = 224, 
    _WHITE = 240 
};

// EXEMPLO DE COMO USAR:
// SEMPRE UTILIZE O textColor(a cor da letra, a cor do fundo); (cores de fundo utilizar sem o "_" - underline)
// sempre começará com a cor que você vai utilizar e vai terminar na cor normal que você precisa mudar também.