SET ( liboslquery_srcs oslquery.cpp ../liboslexec/osoreader.cpp
      ../liboslexec/typespec.cpp )
FILE ( GLOB compiler_headers "../liboslexec/*.h" )
INCLUDE_DIRECTORIES ( ../liboslexec )

FLEX_BISON ( ../liboslexec/osolex.l ../liboslexec/osogram.y oso liboslquery_srcs compiler_headers )

if (BUILDSTATIC)
    ADD_LIBRARY ( oslquery STATIC ${liboslquery_srcs} )
else ()
    ADD_LIBRARY ( oslquery SHARED ${liboslquery_srcs} )
endif ()

TARGET_LINK_LIBRARIES ( oslquery ${OPENIMAGEIO_LIBRARY} ${Boost_LIBRARIES} ${TBB_LIBRARY})
LINK_ILMBASE ( oslquery )

if (BUILDSTATIC)
    INSTALL ( TARGETS oslquery RUNTIME DESTINATION bin LIBRARY DESTINATION bin ARCHIVE DESTINATION lib)
else ()
    INSTALL ( TARGETS oslquery RUNTIME DESTINATION bin LIBRARY DESTINATION bin )
endif ()
