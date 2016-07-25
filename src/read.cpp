#include "read.h"

Read::Read(string name, string seq, string strand, string quality){
	mName = name;
	mSeq = seq;
	mStrand = strand;
	mQuality = quality;
	mHasQuality = true;
}

Read::Read(string name, string seq, string strand){
	mName = name;
	mSeq = seq;
	mStrand = strand;
	mHasQuality = false;
}

void Read::print(){
	std::cout << mName;
	std::cout << mSeq;
	std::cout << mStrand;
	if(mHasQuality)
		std::cout << mQuality;
}