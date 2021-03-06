//########################################################################
//## Copyright 2019 Da Yan http://www.cs.uab.edu/yanda
//##
//## Licensed under the Apache License, Version 2.0 (the "License");
//## you may not use this file except in compliance with the License.
//## You may obtain a copy of the License at
//##
//## //http://www.apache.org/licenses/LICENSE-2.0
//##
//## Unless required by applicable law or agreed to in writing, software
//## distributed under the License is distributed on an "AS IS" BASIS,
//## WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//## See the License for the specific language governing permissions and
//## limitations under the License.
//########################################################################

//########################################################################
//## Contributors
//## * Wenwen Qu
//## * Da Yan
//########################################################################

#ifndef TRANS_H_
#define TRANS_H_

#include <vector>
#include <fstream>
#include "Global.h"
using namespace std;

class Trans{
public:
	int tid;
	Trans(): tid(-1){};
	Trans(int t):tid(t){};
};

class ProjTrans{
public:
	int tid;
	ProjTrans(): tid(-1){};
	ProjTrans(int _id): tid(_id){};
};

#endif /* TRANS_H_ */
