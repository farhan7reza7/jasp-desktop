//
// Copyright (C) 2018 University of Amsterdam
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef DATAEXPORTER_H
#define DATAEXPORTER_H

#include "exporter.h"

///
/// To export data to csv, with or without computed columns
class DataExporter : public Exporter
{
public:
	DataExporter(bool includeComputeColumns);
	~DataExporter() override;
	void saveDataSet(const std::string &path, std::function<void (int)> progressCallback) override;

	bool _includeComputeColumns;

private:
	JASPTIMER_CLASS(DataExporter);
};

#endif // DATAEXPORTER_H
