/* definition of new type vector */
typedef struct {
double x;
double y;
double z;
} vector;
/* definition of the vector API */
vector* vector_new(double, double, double); //cria um vetor
vector* vector_add(vector*, vector*); //soma de vetores
vector* vector_sub(vector*, vector*); //subtraçao de vetores
vector* vector_scale(double, vector*); //vetor multiplicado por uma constante
vector* vector_vprod(vector*, vector*); // produto vetorial
double vector_sprod(vector*, vector*); // produto escalar
double vector_mod(vector*); //módulo de um vetor