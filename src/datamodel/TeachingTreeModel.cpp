#include "database/RecordsManager.h"
#include "datamodel/TreeItem.h"
#include "datamodel/TeachingTreeModel.h"

TeachingTreeModel::TeachingTreeModel(RecordsManager* db, QObject *parent):
    TreeModel(db, parent) {
}

TeachingTreeModel::~TeachingTreeModel() {
}

void TeachingTreeModel::setupModel(int yearStart, int yearEnd, std::vector<std::string> sortFields, char filterStart, char filterEnd, std::string searchWord, std::vector<std::string> advArray) {
    rootItem = new TreeItem(dataObj->createHeadersListForTeaching(sortFields[0]));
    setupModelData(dataObj->createQStringForTeaching(yearStart, yearEnd, sortFields, filterStart, filterEnd, searchWord, advArray).split(QString("\n")), rootItem);
}

