/*
 * LCell.h
 *
 *  Created on: 26/ott/2010
 *      Author: packyuser
 */

#ifndef LCELL_H_
#define LCELL_H_

template<class L>
struct lcell {
	L val;
	lcell<L> *next;
};

#endif /* LCELL_H_ */
