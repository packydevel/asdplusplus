/*
 * ListSP.cpp
 *
 *  Created on: 26/ott/2010
 *      Author: packyuser
 */

#ifndef _LIST_H
#define _LIST_H
#include "include/ListSP.h"
#endif

#ifndef _MAIN_H
#include "include/main.h"
#endif

template<class L>
ListSP<L>::ListSP() {
	CreaLista();
}
;

template<class L>
ListSP<L>::~ListSP() {
}
;
template<class L>
void ListSP<L>::CreaLista() {
	lista = NULL;
}
;
template<class L>
bool ListSP<L>::ListaVuota() {
	return (lista == NULL);
}
;
template<class L>
lcell<L> *ListSP<L>::PrimoLista() {
	return (lista);
}
;
template<class L>
bool ListSP<L>::FineLista(lcell<L> *p) {
	return (p == NULL);
}
;
template<class L>
lcell<L> *ListSP<L>::SuccLista(lcell<L> *p) {
	if (ListaVuota())
		_gerr("ListSP::SuccLista: la lista e' vuota.");
	lcell<L> *ret = NULL;
	if (p != NULL)
		ret = p->next;
	return (ret);
}
;
template<class L>
lcell<L> *ListSP<L>::PredLista(lcell<L> *p) {
	if (ListaVuota())
		_gerr("ListSP::PredLista: la lista e' vuota.");
	if (p == lista)
		_gerr("ListSP::PredLista: l'elemento e' il primo elemento della	lista.");
	lcell<L> *ret = NULL, tmp = lista;
	while ((tmp->next != NULL) && (ret != NULL)) {
		if (tmp->next == p)
			ret = tmp;
		else
			tmp = tmp->next;
	}
	return (ret);
}

template<class L>
lcell<L> *ListSP<L>::UltimoLista() {
	if (ListaVuota())
		_gerr("ListSP::UltimoLista: la lista e' vuota.");
	lcell<L> *ret = lista;
	while (ret->next != NULL)
		ret = ret->next;
	return (ret);
}
;
template<class L>
lcell<L> *ListSP<L>::InsLista(lcell<L> *pos, L u) {
	lcell<L> *ret = new (lcell<L> );
	ret->val = u;
	if (pos == NULL) {
		ret->next = NULL;
		if (lista == NULL) {
			lista = ret;
		} else {
			lcell<L> *tmp = lista;
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = ret;
		}
	} else {
		if (pos == PrimoLista()) {
			ret->next = lista;
			lista = ret;
		} else {
			lcell<L> *tmp = lista;
			while (tmp->next != pos)
				tmp = tmp->next;
			ret->next = tmp->next;
			tmp->next = ret;
		}
	}
	return (ret);
}
;
template<class L>
void ListSP<L>::CancLista(lcell<L> *u) {
	if (ListaVuota())
		_gerr("ListSP::UltimoLista: la lista e' vuota.");
	lcell<L> *tmp = lista;
	if (tmp == u) {
		lista = tmp->next;
		delete (tmp);
	} else {
		bool found = false;
		while ((tmp->next != NULL) && (!found)) {
			if (tmp->next == u) {
				lcell<L> *tmp2 = tmp->next->next;
				delete (tmp->next);
				tmp->next = tmp2;
				found = true;
			} else {
				tmp = tmp->next;
			}
		}
	}
}
;
template<class L>
L ListSP<L>::LeggiLista(lcell<L> *p) {
	L ret;
	if (p != NULL)
		ret = p->val;
	return (ret);
}
;
