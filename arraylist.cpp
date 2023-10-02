template<class ItemType>
ArrayList<ItemType>::ArrayList() : maxCount(DEFAULT_CAPACITY), itemCount(0){}

template<class ItemType>
ArrayList<ItemType>::ArrayList(const ArrayList<ItemType>& aList){
	maxCount(aList.maxCount()), itemCount(aList.itemCount());
}

template<class ItemType>
bool ArrayList<ItemType>::isEmpty() const{
	return itemCount == 0;

	return false;
}

template<class ItemType>
int ArrayList<ItemType>::getLength() const{
	return itemCount;
}

template<class ItemType>
bool ArrayList<ItemType>::insert(int newPosition, const ItemType& newEntry){
	bool ableToInsert = (newPosition >= 1) &&
                            (newPosition <= itemCount + 1) &&
                            (itemCount < maxCount);
	if (ableToInsert){
		for(int pos = itemCount + 1; pos > newPosition; pos--){
			items[pos] = items[pos - 1];
        	}
        	items[newPosition] = newEntry;
        	itemCount++;
    	}
    	return ableToInsert;
}

template<class ItemType>
bool ArrayList<ItemType>::remove(int position){
	bool ableToRemove = (itemCount >= 1) && (position <= itemCount);

	if (ableToRemove){
		for(int pos = position - 1; pos < itemCount; pos++){
			items[pos] = items[pos + 1];
		}	

		itemCount--;
	}
    	return ableToRemove;

    	return false;
}

template<class ItemType>
void ArrayList<ItemType>::clear(){
	itemCount = 0;
}

template<class ItemType>
ItemType ArrayList<ItemType>::getEntry(int position) const {
	bool ableToGet = (position >= 1) && (position <= itemCount);

	if (ableToGet){
		return items[position];
	} 
	throw "Item not found";
} 

template<class ItemType>
ItemType ArrayList<ItemType>::replace(int position, const ItemType& newEntry){
    	bool ableToReplace = (position >= 1) && (position <= itemCount);

		if (ableToReplace){
			items[position] = newEntry;
		}
    	ItemType temp;
    	return temp;
}
