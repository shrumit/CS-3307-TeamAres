#include "database/RecordsManager.h"
#include "datamodel/TreeItem.h"
#include "datamodel/PublicationTreeModel.h"

PublicationTreeModel::PublicationTreeModel(RecordsManager* db, QObject *parent) :
TreeModel(db, parent) {
}

PublicationTreeModel::~PublicationTreeModel() {
}

void PublicationTreeModel::setupModel(int yearStart, int yearEnd, std::vector<std::string> sortFields, char filterStart, char filterEnd, std::string searchWord, std::vector<std::string> advArray) {
    rootItem = new TreeItem(dataObj->createHeadersListForPubs(sortFields[0]));
    setupModelData(dataObj->createQStringForPubs(yearStart, yearEnd, sortFields, filterStart, filterEnd, searchWord, advArray).split(QString("\n")), rootItem);
}
