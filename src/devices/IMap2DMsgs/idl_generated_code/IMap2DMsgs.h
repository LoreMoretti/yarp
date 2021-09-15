/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SERVICE_IMAP2DMSGS_H
#define YARP_THRIFT_GENERATOR_SERVICE_IMAP2DMSGS_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>
#include <return_get_all_areas.h>
#include <return_get_all_locations.h>
#include <return_get_all_paths.h>
#include <return_get_area.h>
#include <return_get_areas_list.h>
#include <return_get_location.h>
#include <return_get_locations_list.h>
#include <return_get_map.h>
#include <return_get_map_names.h>
#include <return_get_path.h>
#include <return_get_paths_list.h>
#include <yarp/dev/Map2DArea.h>
#include <yarp/dev/Map2DLocation.h>
#include <yarp/dev/Map2DPath.h>
#include <yarp/dev/MapGrid2D.h>

class IMap2DMsgs :
        public yarp::os::Wire
{
public:
    // Constructor
    IMap2DMsgs();

    virtual bool clear_all_maps_RPC();

    virtual bool store_map_RPC(const yarp::dev::Nav2D::MapGrid2D& themap);

    virtual return_get_map get_map_RPC(const std::string& map_name);

    virtual return_get_map_names get_map_names_RPC();

    virtual bool remove_map_RPC(const std::string& map_name);

    virtual bool store_location_RPC(const std::string& location_name, const yarp::dev::Nav2D::Map2DLocation& loc);

    virtual bool store_area_RPC(const std::string& area_name, const yarp::dev::Nav2D::Map2DArea& area);

    virtual bool store_path_RPC(const std::string& path_name, const yarp::dev::Nav2D::Map2DPath& path);

    virtual return_get_location get_location_RPC(const std::string& location_name);

    virtual return_get_area get_area_RPC(const std::string& area_name);

    virtual return_get_path get_path_RPC(const std::string& path_name);

    virtual return_get_locations_list get_locations_list_RPC();

    virtual return_get_areas_list get_areas_list_RPC();

    virtual return_get_paths_list get_paths_list_RPC();

    virtual return_get_all_locations get_all_locations_RPC();

    virtual return_get_all_areas get_all_areas_RPC();

    virtual return_get_all_paths get_all_paths_RPC();

    virtual bool rename_location_RPC(const std::string& original_name, const std::string& new_name);

    virtual bool delete_location_RPC(const std::string& location_name);

    virtual bool delete_path_RPC(const std::string& path_name);

    virtual bool rename_area_RPC(const std::string& original_name, const std::string& new_name);

    virtual bool rename_path_RPC(const std::string& original_name, const std::string& new_name);

    virtual bool delete_area_RPC(const std::string& area_name);

    virtual bool clear_all_locations_RPC();

    virtual bool clear_all_areas_RPC();

    virtual bool clear_all_paths_RPC();

    virtual bool clear_all_maps_temporary_flags_RPC();

    virtual bool clear_map_temporary_flags_RPC(const std::string& map_name);

    virtual bool save_maps_collection_RPC(const std::string& maps_collection_file);

    virtual bool load_maps_collection_RPC(const std::string& maps_collection_file);

    virtual bool save_locations_and_extras_RPC(const std::string& locations_collection_file);

    virtual bool load_locations_and_extras_RPC(const std::string& locations_collection_file);

    virtual bool save_map_to_disk_RPC(const std::string& map_name, const std::string& file_name);

    virtual bool load_map_from_disk_RPC(const std::string& file_name);

    virtual bool enable_maps_compression_RPC(const bool enable_compression);

    // help method
    virtual std::vector<std::string> help(const std::string& functionName = "--all");

    // read from ConnectionReader
    bool read(yarp::os::ConnectionReader& connection) override;
};

#endif // YARP_THRIFT_GENERATOR_SERVICE_IMAP2DMSGS_H