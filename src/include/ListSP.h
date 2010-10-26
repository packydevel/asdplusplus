/*
 * ListSP.h
 *
 *  Created on: 26/ott/2010
 *      Author: packyuser
 */

#ifndef LISTSP_H_
#define LISTSP_H_

#ifndef LCELL_H_
#include "LCell.h"
#endif

template<class L>
class ListSP {
public:
	ListSP();
	~ListSP();
	void CreaLista();
	bool ListaVuota();
	lcell<L> *PrimoLista();
	bool FineLista(lcell<L> *);
	lcell<L> *SuccLista(lcell<L> *);
	lcell<L> *PredLista(lcell<L> *);
	lcell<L> *UltimoLista();
	lcell<L> *InsLista(lcell<L> *, L);
	void CancLista(lcell<L> *);
	L LeggiLista(lcell<L> *);
private:
	lcell<L> *lista;
};

#endif /* LISTSP_H_ */
