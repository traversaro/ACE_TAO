// $Id$

#include "Plan_Launcher_Impl.h"

namespace DAnCE
  {
  namespace Plan_Launcher
    {
      int
      run_main_implementation (int argc, ACE_TCHAR *argv[])
      {
        try
          {
            Plan_Launcher_Impl pl (argc, argv);
            pl.execute();
          }
        catch (const Plan_Launcher_Impl::Deployment_Failure& e)
          {
            DANCE_ERROR (1, (LM_ERROR, "PlanLauncher error: %C.\n", e.error_.c_str()));
            return -1;
          }
        catch (const CORBA::Exception& ex)
          {
            ex._tao_print_exception ("Plan_Launcher.cpp::run_main_implementation ");
            return -1;
          }
        catch (...)
          {
            DANCE_ERROR (1, (LM_ERROR, "Plan_Launcher.cpp::run_main_implementation Unknown exception.\n"));
            return -1;
          }
        return 0;
      }


    } // Plan_Launcher
} // DAnCE




