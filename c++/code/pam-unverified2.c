int valid(pam_handle_t *pamh) {
    if (pam_authenticate(pamh, PAM_DISALLOW_NULL_AUTHTOK) != PAM_SUCCESS) {
        return -1;
    }
    pam_acct_mgmt(pamh, 0); // Noncompliant
    return 0;
}