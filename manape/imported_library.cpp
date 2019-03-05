/*
    This file is part of Manalyze.

    Manalyze is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Manalyze is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Manalyze.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "manape/imported_library.h"

namespace mana
{

ImportedLibrary::ImportedLibrary(const std::string& library_name, pimage_import_descriptor image_import_descriptor)
	: _image_import_descriptor(std::move(image_import_descriptor)),
	  _load_type(ImportedLibrary::STANDARD), 
	  _library_name(library_name),
	  _imported_functions(new std::vector<pimport_lookup_table>())
{}

// ----------------------------------------------------------------------------

ImportedLibrary::ImportedLibrary(const std::string& library_name)
	: _image_import_descriptor(nullptr),
	  _load_type(DELAY_LOADED),
	  _library_name(library_name),
	_imported_functions(new std::vector<pimport_lookup_table>())
{}

// ----------------------------------------------------------------------------

} // !namespace mana