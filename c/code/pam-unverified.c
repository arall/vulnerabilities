int valid(pam_handle_t *pamh) {
    if (pam_authenticate(pamh, PAM_DISALLOW_NULL_AUTHTOK) != PAM_SUCCESS) { // Noncompliant - missing pam_acct_mgmt
        return -1;
    }

    return 0;
}