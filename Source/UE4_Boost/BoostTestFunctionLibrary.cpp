// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4_Boost.h"
#include "BoostTestFunctionLibrary.h"

//#include <boost/timer/timer.hpp>
//#include <cmath>

#include <boost/graph/adjacency_list.hpp>
#include <boost/tuple/tuple.hpp>

void UBoostTestFunctionLibrary::testTimer()
{
	UE_LOG(BoostLog, Warning, TEXT("ENTER testTimer"));

//	boost::timer::auto_cpu_timer t;
//
//	for (long i = 0; i < 100000000; ++i)
//		std::sqrt(123.456L); // burn some time

	UE_LOG(BoostLog, Warning, TEXT("EXIT testTimer"));
}

void UBoostTestFunctionLibrary::testGraph()
{
	enum family
	{
		Jeanie, Debbie, Rick, John, Amanda, Margaret, Benjamin, N
	};

	using namespace boost;
	const char *name[] = { "Jeanie", "Debbie", "Rick", "John", "Amanda",
		"Margaret", "Benjamin"
	};

	adjacency_list <> g(N);
	add_edge(Jeanie, Debbie, g);
	add_edge(Jeanie, Rick, g);
	add_edge(Jeanie, John, g);
	add_edge(Debbie, Amanda, g);
	add_edge(Rick, Margaret, g);
	add_edge(John, Benjamin, g);

	graph_traits < adjacency_list <> >::vertex_iterator i, end;
	graph_traits < adjacency_list <> >::adjacency_iterator ai, a_end;
	property_map < adjacency_list <>, vertex_index_t >::type
		index_map = get(vertex_index, g);

	for (boost::tie(i, end) = vertices(g); i != end; ++i) {
		//std::cout << name[get(index_map, *i)];
		UE_LOG(BoostLog, Warning, TEXT("%s"), UTF8_TO_TCHAR(name[get(index_map, *i)]) );

		boost::tie(ai, a_end) = adjacent_vertices(*i, g);
		
		if (ai == a_end)
		{
			//std::cout << " has no children";
			UE_LOG(BoostLog, Warning, TEXT(" has no children"));
		}
		else
		{
			//std::cout << " is the parent of ";
			UE_LOG(BoostLog, Warning, TEXT(" is the parent of "));
		}

		for (; ai != a_end; ++ai) {
			//std::cout << name[get(index_map, *ai)];
			UE_LOG(BoostLog, Warning, TEXT("%s"), UTF8_TO_TCHAR(name[get(index_map, *ai)]) );

			if (boost::next(ai) != a_end)
				//std::cout << ", ";
				UE_LOG(BoostLog, Warning, TEXT(", "));
		}
		//std::cout << std::endl;
	}
}
