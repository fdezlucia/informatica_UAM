#include "queue.h"

/**------------------------------------------------------------------
Nombre: iniQueue
Descripcion: Inicializa la cola
Entrada: la cola a inicializar
Salida: ERR si ha habido error o OK si ha ido bien
------------------------------------------------------------------*/
STATUS iniQueue(QUEUE *q)
{
  return iniList(q);

}

/**------------------------------------------------------------------
Nombre: isEmptyQueue
Descripcion: Comprueba si la cola está vacía
Entrada: la cola
Salida: TRUE si la cola está vacía y FALSE en caso contrario
------------------------------------------------------------------*/
BOOL isEmptyQueue(const QUEUE *q)
{
  return isEmptyList(q);
}

/**------------------------------------------------------------------
Nombre: insertQueue
Descripcion: inserta un elemento en la cola
Entrada: un elemento y la cola donde insertarlo
Salida: ERR si ha habido error o OK si ha ido bien
------------------------------------------------------------------*/
STATUS insertQueue(QUEUE *q, const ELELIST *pElem)
{
  return insertLastEleList (q,pElem);
}

/**------------------------------------------------------------------
Nombre: extractQueue
Descripcion: Extrae un elemento de la cola
Entrada: un elemento y la cola de donde extraerlo
Salida: ERR si ha habido error o OK si ha ido bien
------------------------------------------------------------------*/
STATUS extractQueue(QUEUE *q, ELELIST *pElem)
{
 return extractFirstEleList (q,pElem);
}

/**------------------------------------------------------------------
Nombre: sizeOfQueue
Descripcion: Devuelve el número de elementos de la cola
Entrada: la cola
Salida: el número de elementos de la cola
------------------------------------------------------------------*/
int sizeOfQueue(const QUEUE *q)
{
  return numElemsList(q);
}

/**------------------------------------------------------------------
Nombre: freeQueue
Descripcion: Libera la cola
Entrada: la cola
Salida: ERR si ha habido error o OK si ha ido bien
------------------------------------------------------------------*/
STATUS freeQueue(QUEUE *q)
{
  return freeList(q);
}

/**------------------------------------------------------------------
Nombre: printQueue
Descripcion: imprime toda la cola
Entrada: cola a imprimir y fichero donde imprimirla
------------------------------------------------------------------*/
void printQueue(FILE *pf, const QUEUE *q)
{
  printList(pf,q);
}
