#include <_darkhole_job_pass_inform_zocl.hpp>


START_ATF_NAMESPACE
    int _darkhole_job_pass_inform_zocl::size()
    {
        using org_ptr = int (WINAPIV*)(struct _darkhole_job_pass_inform_zocl*);
        return (org_ptr(0x14026f840L))(this);
    };
END_ATF_NAMESPACE
