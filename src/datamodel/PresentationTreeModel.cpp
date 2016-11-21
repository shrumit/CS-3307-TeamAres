#include "database/RecordsManager.h"
#include "datamodel/TreeItem.h"
#include "datamodel/PresentationTreeModel.h"

PresentationTreeModel::PresentationTreeModel(RecordsManager* db, QObject *parent) :
TreeModel(db, parent) {
}

PresentationTreeModel::~PresentationTreeModel() {
}

void PresentationTreeModel::setupModel(int yearStart, int yearEnd, std::vector<std::string> sortFields, char filterStart, char filterEnd, std::string searchWord) {
    rootItem = new TreeItem(dataObj->createHeadersListForPres(sortFields[0]));
    setupModelData(dataObj->createQStringForPres(yearStart, yearEnd, sortFields, filterStart, filterEnd, searchWord).split(QString("\n")), rootItem);
}
